//chp1ex0
#include <iostream>
#include <string>

int main() {
	//�̸��� ����
	std::cout << "what's your name? ";
	//�̸��� �д´�
	std::string name;
	std::cin >> name;

	//�λ縻 �ۼ�
	//����ϴ� �޽����� ����

	const std::string greeting = "hello," + name + "!";
	//�λ縻�� �ι�° ��� �׹��� ��
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
	//�λ縻�� ù ���� ��� �ټ���° ��
	const std::string first(second.size(), '*');
	//��� ��� 

	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;


	return 0;
}