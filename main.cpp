// New Branch "dev"

#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"

//This comment is for the pull request lab
int main() {

	//Task A
	std::cout << "--------------" << std::endl;
    std::cout << "Task A" << std::endl;
    std::cout << "--------------" << std::endl;
	std::string line = "       int x = 1;  ";
	std::cout << '"' << line << '"' << std::endl << '"' << removeLeadingSpaces(line) << '"' << std::endl;


	//Task B
	//Read bad-code.cpp
	std::cout << "--------------" << std::endl;
    std::cout << "Task B" << std::endl;
    std::cout << "--------------" ;
	std::string output;
	std::ifstream badF("bad-code.cpp");
	if (badF.fail()) {
		std::cout << "Failed to open file" << std::endl;
		return 1;
	}

	// fix bad-code.cpp
	output = indentation(badF);
	std::cout << "\nFixed bad-code.cpp:\n" << output << std::endl;


	return 0;
}
