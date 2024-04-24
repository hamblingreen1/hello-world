#include <iostream>
#include <thread>
#include <chrono>

int main() {
	std::string hello = "Hello World!            ";
	int len = hello.length();

	while (true) {
		for (int i = 0; i < len; i++) {
			// Print the string with scrolling effect
			std::cout << hello.substr(i, len - i) << hello.substr(0, i) << std::flush;

			// Wait for a short period of time
			std::this_thread::sleep_for(std::chrono::milliseconds(100));

			// Clear the line and go back to the beginning
			std::cout << '\r';
		}
	}

	return 0;
}

