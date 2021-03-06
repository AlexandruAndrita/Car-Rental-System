#pragma once
#include <string>
#include "CompanyBranches.h"
#include "Prototypes.h"
#include "SystemClass.h"

void FirmRegistration(SystemClass& mainOBJ,std::vector<std::string>& branchesList)
{
	Sleep(0.016);
	system("cls");
	std::cout << "\t[1] Registrate your firm\n";
	std::cout << "\t[2] Go to main page\n";
	std::cout << "\tYour option:\n";
	std::string input;
	while (1)
	{
		std::cout << "\t";
		std::cin >> input;
		std::cin.ignore();
		if (InputValid(input))
		{
			int option = std::stoi(input);
			if (option <= 2)
			{
				if (option == 1)
				{
					Sleep(0.016);
					system("cls");
					mainOBJ.Registrate(branchesList);
					MainMenu(mainOBJ, branchesList);
					break;
				}
				if (option == 2)
				{
					Sleep(0.016);
					system("cls");
					MainMenu(mainOBJ,branchesList);
					break;
				}
			}
			else
			{
				std::cout << "\tYour option is invalid\n";
				std::cout << "\tTry again\n";
			}
		}
		else
		{
			std::cout << "\tYour option is invalid\n";
			std::cout << "\tTry again\n";
		}
	}
}


