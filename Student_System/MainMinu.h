#pragma once
#include <iostream>
#include "Student_Sys_Operations.h"
#include "Operations_Functions.h"

using namespace std;

int MainMinu()
{
	int Chise;

	cout << " ::Welcome To Student System :: \n";
	cout << " -----------------------------\n";
	cout << " ::This Is The MainMinue For The Student Grdents::\n";
	cout << " -----------------------------\n";
	cout << " 1- Adding New Sttudent ::\n";
	cout << " -----------------------------\n";
	cout << " 2- Dispaly Student Data ::\n";
	cout << " -----------------------------\n";
	cout << " 3- Search For Student  ::\n";
	cout << " -----------------------------\n";
	cout << " 4- Update Student Data  ::\n";
	cout << " -----------------------------\n";
	cout << " 5- Delete Student Data ::\n";
	cout << " -----------------------------\n";
	cout << " 6- Get Top Students And Less Students ::\n";
	cout << " -----------------------------\n";
	cout << " 7- Close Programe ::\n\n";
	cout << " -----------------------------\n";

	cout << " Enter Your Choice\t";
	cin >> Chise;

	switch (Chise)
	{
	case 1:
		GetFunction.CreateFile();
		break;
	case 2:
		GetFunction.DisplayData();
		break;
	case 3:
		GetFunction.SearchData();
		break;
	case 4:
		//GetFunction.Update();
		break;
	case 5:
		GetFunction.DeleteData();
		break;
	case 6:

		break;

	default:
		break;
	}

	return 0;
}

