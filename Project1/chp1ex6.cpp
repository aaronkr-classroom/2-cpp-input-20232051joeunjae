//chp1ex6
#include <iostream>
#include <string>

int main() {
	//이름을 물음
	std::cout << "what's your name? ";
	//이름을 읽는다
	std::string name;
	std::cin >> name;
	std::cout << "hello," << name << std::endl << "and what is yours?";
	std::cin >> name;
	std::cout << "hello, " << name << ";nice to meet you too!" << std::endl;

	return 0;
}