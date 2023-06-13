#include <iostream>
#include <string>
std::string textOne(std::string GG)
{
	return GG;
}
std::string textTwo(std::string WP)
{
	return WP;
}
int main()
{
	std::string GG;
	std::string WP;
	std::cout << ""Enter first string: " << std::endl;
	std::cin >> GG;
	std::cout << "Enter second string:" << std::endl;
	std::cin >> WP;
	std::string textO = textOne(GG);
	std::string textT = textTwo(WP);
	std::cout << "Result: " << std::endl;
	std::cout << GG << std::endl;
	std::cout << GG << std::endl;
	std::cout << WP << std::endl;
	std::cout << WP << std::endl;
	system("pause");
	return 0;
}
