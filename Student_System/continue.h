#pragma once
#include <iostream>
#include "MainMinu.h"
#include "Operations_Functions.h"
#include "Student_Sys_Operations.h"

using namespace std;

char Cont;
// Eng.Rasheed Adnan Al-Wahbany ^_^
int continuCreate()
{

	cout << " To Continue Adding More Data For Students Press \"Y\" If Not Press \"N\" :: \t";
	cin >> Cont;

	if (Cont == 'Y' || Cont == 'y')
	{
		GetFunction.CreateFile();
	}

	else if (Cont == 'N' || Cont == 'n')
	{
		MainMinu();
	}
	else
	{
		cout << " Error Try Again Please Make Sure From Your Choise\t";
		continuCreate();
	}
	return 0;
}

int continuSearch()
{

	cout << " To Continue Adding More Data For Students Press \"Y\" If Not Press \"N\" :: \t";
	cin >> Cont;

	if (Cont == 'Y' || Cont == 'y')
	{
		GetFunction.SearchData();
	}

	else if (Cont == 'N' || Cont == 'n')
	{
		MainMinu();
	}
	else
	{
		cout << " Error Try Again Please Make Sure From Your Choise\t";
		continuSearch();
	}
	return 0;
}

int continuDisplay()
{

	cout << " To Continue Adding More Data For Students Press \"Y\" If Not Press \"N\" :: \t";
	cin >> Cont;

	if (Cont == 'Y' || Cont == 'y')
	{
		GetFunction.DisplayData();
	}

	else if (Cont == 'N' || Cont == 'n')
	{
		MainMinu();
	}
	else
	{
		cout << " Error Try Again Please Make Sure From Your Choise\t";
		continuDisplay();
	}
	return 0;
}


int continuDelete()
{

	cout << " To Continue Adding More Data For Students Press \"Y\" If Not Press \"N\" :: \t";
	cin >> Cont;

	if (Cont == 'Y' || Cont == 'y')
	{
		GetFunction.DeleteData();
	}

	else if (Cont == 'N' || Cont == 'n')
	{
		MainMinu();
	}
	else
	{
		cout << " Error Try Again Please Make Sure From Your Choise\t";
		continuDelete();
	}
	return 0;
}