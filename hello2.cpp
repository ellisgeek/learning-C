#include <stdio.h>
#include <string>
#include <iostream>
int main() {
	char name[128];
	std::cout << "Enter your name: ";
	std::cin.getline(name,sizeof(name));
	std::cout << "Hello " << name << "!" << std::endl;
}