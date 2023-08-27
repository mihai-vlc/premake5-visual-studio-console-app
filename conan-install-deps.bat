conan install conanfile.txt --output-folder=build --build=missing --settings=build_type=Debug

conan install conanfile.txt --output-folder=build --build=missing --settings=build_type=Release

.\tools\premake5.exe vs2022

