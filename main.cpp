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
	setlocale(LC_ALL, "rus");
	std::string GG;
	std::string WP;
	std::cout << "������� ������ ������" << std::endl;
	std::cin >> GG;
	std::cout << "������� ������ ������" << std::endl;
	std::cin >> WP;
	std::string textO = textOne(GG);
	std::string textT = textTwo(WP);
	std::cout << "���������:" << std::endl;
	std::cout << GG << std::endl;
	std::cout << GG << std::endl;
	std::cout << WP << std::endl;
	std::cout << WP << std::endl;
	system("pause");
	return 0;
}