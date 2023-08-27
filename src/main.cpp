#include <iostream>
#include <spdlog/spdlog.h>

int main() {

	spdlog::set_level(spdlog::level::debug);

	spdlog::debug("opening the program");
	spdlog::info("opening the program");
	spdlog::warn("opening the program");
	spdlog::error("opening the program");


	int a;
	std::cin >> a;
	return 0;
}
