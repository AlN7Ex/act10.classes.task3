#include "class_golf.h"

#include <cstring>

int main()
{
	char fullname[LEN];
	int handicap;

	std::cout << "Enter a fullname: ";

	while(std::cin.get(fullname, LEN))
	{
		while (std::cin.get() != '\n')
		{
			continue;
		}

		std::cout << "Enter a handicap: ";
		std::cin >> handicap;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
		}
		else
		{
			std::cin.get();						// consume '\n' after 'cin >> ...'
			Golf person_1(fullname, handicap);
			
			if (handicap > 0)
			{
				person_1.Show();
			}
			else
			{
				std::cout << "Wrong input. Negative handicap." << std::endl;
			}
		}

		Golf person_2("Vsevolod", 25);
		person_2.Show();

		std::cout << "Enter a fullname: ";
	}

	// check that cin.get() change '\n' to '\0' after input a void string (press Enter)
	std::cout << "@" << fullname << "@" << std::endl;
	std::cout << "Done!";
}
