#include <iostream>
#include <spdlog/spdlog.h>
#include <filesystem>
#include <fstream>

int main() {

	spdlog::set_level(spdlog::level::debug);

	spdlog::debug("opening the program");
	spdlog::info("opening the program");
	spdlog::warn("opening the program");
	spdlog::error("opening the program");

	std::cout << std::filesystem::exists("a.txt") << std::endl;

	std::filesystem::path configFilePath("config.txt");

	std::cout << configFilePath << std::endl;

	std::fstream configFile;

	configFile.open(configFilePath, std::ios::app);

	configFile << "First line" << std::endl;
	configFile << "Second line" << std::endl;

	configFile.close();

	int a;
	std::cin >> a;
	return 0;
}
