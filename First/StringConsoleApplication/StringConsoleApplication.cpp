#include <iostream>
#include <string>

void task1()
{
	char signFromUser;
	//signFromUser = 'a';
	std::cout << "Podaj znak\n";
	std::cin >> signFromUser;

	std::cout << "Podales znak" << signFromUser << "\n";
	
	//if (signFromUser >= 97 && signFromUser <= 122)
	if (signFromUser >= 'a' && signFromUser <= 'z')
		std::cout << "znak jest mala litera alfabetu\n";
	else
		std::cout << "znak nie jest liczba alfabetu\n";

	signFromUser = signFromUser + 2;
	std::cout << "Podales znak" << signFromUser << "\n";

	signFromUser = 'a' + 2;
	std::cout << "podales znak" << signFromUser << "\n";
}

int main()
{

}
