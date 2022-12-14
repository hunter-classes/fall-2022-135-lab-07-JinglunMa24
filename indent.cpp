#include <iostream>
#include <fstream>
#include "unindent.h"

int countChar(std::string line, char c) {
	int count = 0;
	
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == c) {
			count++;
		}
	}

	return count;
}


std::string indentation(std::ifstream& badcode) {
	std::string line, output;
	int count = 0;

	while (std::getline(badcode, line)) {
		line = removeLeadingSpaces(line);

		if (line[0] == '}') {
			count--;
		}

		for (int i = 0; i < count; i++) {
			output += '\t';
		}

		output += line + '\n';
		count += countChar(line, '{');

	}

	badcode.close();

	return output;
}