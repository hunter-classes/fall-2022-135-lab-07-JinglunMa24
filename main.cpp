#include <iostream>
#include "unindent.h"

int main() {
	std::string line = "int main(){           ";

	std::cout << '"' << line << '"' << std::endl << '"' << removeLeadingSpaces(line) << '"' << std::endl;
	

	return 0;
}