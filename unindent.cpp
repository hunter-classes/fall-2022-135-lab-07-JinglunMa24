#include <iostream>

std::string removeLeadingSpaces(std::string line) {
	std::string output;
	bool space = true;

	for (int i = 0; i < line.length(); i++) {
		if (!isspace(line[i])) {
			space = false;
		}

		if (!space) {
			output += line[i];

		}
	}

	return output;
}