//chp1ex5
#include <iostream>
#include <string>

int main() {

	{
		const std::string s = "a string";
		{
			std::string x = s + ",relly";
			std::cout << s << std::endl;

			std::cout << x << std::endl;
		}
		}
	


		
	return 0;
}