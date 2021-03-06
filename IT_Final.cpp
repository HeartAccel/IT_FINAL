#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>

#include "getInput.h"
#include "fileHandler.h"
#include "checkData.h"

int main()
{

	//Start of the program
	std::cout << "Main Console\n--------------------\n1. Add to database\n2. Start Program\n3. View Database\n4. Exit\n--------------------" << std::endl;
	std::string menuPicker;

	getInput newInput;
	checkData viewDB;

	//Menu: Loop the certain under these conditions(While user input is not 3(exit))
	do
	{
		std::cout << ">";
		std::cin >> menuPicker;
		if (menuPicker == "1")
		{
			system("cls");
			break;
		}
		if (menuPicker == "2")
		{
			//Clears screen and starts getInput class
			newInput.getStudentId();
			break;
		}
		if (menuPicker == "3")
		{
			viewDB.viewDatavbase();
			break;
		}
		else
		{
			std::cout << "Please enter a valid menu number" << std::endl;
		}
	} while (menuPicker != "4");

	fileHandler handle;

	if (menuPicker == "1")
	{
		handle.writeToFile();

	}

	return 0;
}

