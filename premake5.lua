-- premake5.lua
include "build/conandeps.premake5.lua"

workspace "MyConsoleApp"
   configurations { "Debug", "Release" }
   architecture "x64"

project "MyConsoleApp"
   kind "ConsoleApp"
   language "C++"

   targetdir "bin/%{cfg.buildcfg}/bin"
   objdir "bin/%{cfg.buildcfg}/obj"

   location "./src"
   files { "%{prj.location}/**.h", "%{prj.location}/**.hpp", "%{prj.location}/**.cpp" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

   conan_setup()


