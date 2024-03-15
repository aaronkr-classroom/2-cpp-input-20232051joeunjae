//chp1ex0
#include <iostream>
#include <string>

int main() {
	//이름을 물음
	std::cout << "what's your name? ";
	//이름을 읽는다
	std::string name;
	std::cin >> name;

	//인사말 작성
	//출력하는 메시지를 구성

	const std::string greeting = "hello," + name + "!";
	//인사말에 두번째 행과 네번쨰 행
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
	//인사말의 첫 번쨰 행과 다섯번째 행
	const std::string first(second.size(), '*');
	//모두 출력 

	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;


	return 0;
}