#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "MainMinu.h"
#include"Student_Sys_Operations.h"
#include "continue.h"

using namespace std;

int continuCreate();
int continuSearch();

int Operations::CreateFile()
{


	ofstream WriteData("Student Data System.dat", ios::app);

	cout << " Hi Now You Are In The Adding Data Section ::\n";
	cout << " Please Enter Student ID\t";
	cin >> GetData.Stu_ID;
	cout << " Please Enter Student First Name\t";
	cin >> GetData.Stu_FName;
	cout << " Please Enter Student Middel Name\t";
	cin >> GetData.Stu_MName;
	cout << " Please Enter Student Last Name\t";
	cin >> GetData.Stu_LName;
	cout << " Please Enter Student Age\t";
	cin >> GetData.Age;
	cout << " Please Enter Student Grand\t";
	cin >> GetData.Grand;
	cout << " Please Enter Student Digital Desigin\t";
	cin >> GetData.DigDes;
	cout << " Please Enter Student Web Design\t";
	cin >> GetData.WebDes;
	cout << " Please Enter Student Network\t";
	cin >> GetData.Network;
	cout << " Please Enter Student Programming Language ( C++ )\t";
	cin >> GetData.ProgrammingLang;
	cout << " Please Enter Student Counting \t";
	cin >> GetData.Counting;
	cout << " Please Enter Student Data Base\t";
	cin >> GetData.Database;

	WriteData << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
		<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
		GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
		<< " " << GetData.Counting << " " << GetData.Database << " \n";

	WriteData.close();

	continuCreate();

	return 0;
}




int Operations::DisplayData()
{
	ifstream GetDataIn("Student Data System.dat", ios::in);
	while (GetDataIn >> GetData.Stu_ID >> GetData.Stu_FName >> GetData.Stu_MName >> GetData.Stu_LName >> GetData.Age >> GetData.Grand >> GetData.DigDes >> GetData.WebDes >> GetData.Network >> GetData.ProgrammingLang >> GetData.Counting >> GetData.Database)
	{
		cout << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
			<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
			GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
			<< " " << GetData.Counting << " " << GetData.Database << " \n";

	}

	continuDisplay();

	return 0;
}
int Operations::CounterData()
{
	ifstream DataNumber("Student Data System.dat", ios::in);

	int Number = 0;
	for (int i = 0; i < DataNumber.end; i++)
	{
		Number++;
	}


	return Number;
}

int Operations::SearchData()
{
	int Choise;
	string Search_ID, Name;
	ifstream GetSearch("Student Data System.dat", ios::in);
	cout << " PLease Choose Whate You Want To Search About ::\n";
	cout << " 1- By Student ID ::\n";
	cout << " 2- By Student First Name ::\n";
	cout << " 3- By Student Middel Name ::\n";
	cout << " 4- By Student Last Name ::\n";
	cout << " Enter Your Choice ::\t";
	cin >> Choise;

	if (Choise == 1) {
		cout << " Please Enter Student ID ::\t ";
		cin >> Search_ID;
		while (GetSearch >> GetData.Stu_ID >> GetData.Stu_FName >> GetData.Stu_MName >> GetData.Stu_LName >> GetData.Age >> GetData.Grand >> GetData.DigDes >> GetData.WebDes >> GetData.Network >> GetData.ProgrammingLang >> GetData.Counting >> GetData.Database)
		{
			if (Search_ID == GetData.Stu_ID)
			{
				cout << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
					<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
					GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
					<< " " << GetData.Counting << " " << GetData.Database << " \n";
			}
			else
			{
				continue;
			}
		}
	}
	else if (Choise == 2)
	{
		cout << " Please Enter Student First Name ::\t ";
		cin >> Name;
		while (GetSearch >> GetData.Stu_ID >> GetData.Stu_FName >> GetData.Stu_MName >> GetData.Stu_LName >> GetData.Age >> GetData.Grand >> GetData.DigDes >> GetData.WebDes >> GetData.Network >> GetData.ProgrammingLang >> GetData.Counting >> GetData.Database)
		{
			if (Name == GetData.Stu_FName)
			{
				cout << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
					<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
					GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
					<< " " << GetData.Counting << " " << GetData.Database << " \n";
			}
			else
			{
				continue;
			}
		}
	}
	else if (Choise == 3)
	{
		cout << " Please Enter Student Middle Name ::\t ";
		cin >> Name;
		while (GetSearch >> GetData.Stu_ID >> GetData.Stu_FName >> GetData.Stu_MName >> GetData.Stu_LName >> GetData.Age >> GetData.Grand >> GetData.DigDes >> GetData.WebDes >> GetData.Network >> GetData.ProgrammingLang >> GetData.Counting >> GetData.Database)
		{
			if (Name == GetData.Stu_MName)
			{
				cout << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
					<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
					GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
					<< " " << GetData.Counting << " " << GetData.Database << " \n";
			}
			else
			{
				continue;
			}
		}
	}
	else if (Choise == 4)
	{
		cout << " Please Enter Student Last Name ::\t ";
		cin >> Name;
		while (GetSearch >> GetData.Stu_ID >> GetData.Stu_FName >> GetData.Stu_MName >> GetData.Stu_LName >> GetData.Age >> GetData.Grand >> GetData.DigDes >> GetData.WebDes >> GetData.Network >> GetData.ProgrammingLang >> GetData.Counting >> GetData.Database)
		{
			if (Name == GetData.Stu_LName)
			{
				cout << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
					<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
					GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
					<< " " << GetData.Counting << " " << GetData.Database << " \n";
			}
			else
			{
				continue;
			}
		}
	}
	else {
		cout << " Error Please Try Again Later \n" << endl;
		SearchData();
	}

	continuSearch();

	return 0;
}
/*int Operations::Update()
{

string Student_ID;
ifstream GetDFUpdate("Student Data System.dat", ios::in);
ofstream GetUpdate("Student Data System.dat", ios::app);
cout << " Please enter the student ID To Update It::\t";
cin >> Student_ID;
while (GetDFUpdate >> GetData.Stu_ID >> GetData.Stu_FName >> GetData.Stu_MName >> GetData.Stu_LName >> GetData.Age >> GetData.Grand >> GetData.DigDes >> GetData.WebDes >> GetData.Network >> GetData.ProgrammingLang >> GetData.Counting >> GetData.Database)
{
if (Student_ID == GetData.Stu_ID)
{
cout << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
<< " " << GetData.Counting << " " << GetData.Database << " \n";
cout << " Please Enter Student ID\t";
cin >> GetData.Stu_ID;
cout << " Please Enter Student First Name\t";
cin >> GetData.Stu_FName;
cout << " Please Enter Student Middel Name\t";
cin >> GetData.Stu_MName;
cout << " Please Enter Student Last Name\t";
cin >> GetData.Stu_LName;
cout << " Please Enter Student Age\t";
cin >> GetData.Age;
cout << " Please Enter Student Grand\t";
cin >> GetData.Grand;
cout << " Please Enter Student Digital Desigin\t";
cin >> GetData.DigDes;
cout << " Please Enter Student Web Design\t";
cin >> GetData.WebDes;
cout << " Please Enter Student Network\t";
cin >> GetData.Network;
cout << " Please Enter Student Programming Language ( C++ )\t";
cin >> GetData.ProgrammingLang;
cout << " Please Enter Student Counting \t";
cin >> GetData.Counting;
cout << " Please Enter Student Data Base\t";
cin >> GetData.Database;

GetUpdate << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
<< " " << GetData.Counting << " " << GetData.Database;

}
else {
continue;
}
}
return 0;
}
*/
int Operations::DeleteData()
{
	int i = CounterData();
	string Student_ID, Choice;
	ifstream GetDFDelete("Student Data System.dat", ios::in);
	ofstream GetDelete("Student Data System.dat", ios::cur);
	cout << " Please enter the student ID To Delete It::\t";
	cin >> Student_ID;
	while (GetDFDelete >> GetData.Stu_ID >> GetData.Stu_FName >> GetData.Stu_MName >> GetData.Stu_LName >> GetData.Age >> GetData.Grand >> GetData.DigDes >> GetData.WebDes >> GetData.Network >> GetData.ProgrammingLang >> GetData.Counting >> GetData.Database)
	{

		if (Student_ID == GetData.Stu_ID)
		{

			cout << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
				<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
				GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
				<< " " << GetData.Counting << " " << GetData.Database << " \n";
			cout << " Are you Sur You Want Delete That \t";
			cin >> Choice;
			if (Choice == "Y" || Choice == "y")
			{
				for (int b = 0; b < i; b++)
				{

					GetDelete << " " << GetData.Stu_ID << " " << GetData.Stu_FName << " " << GetData.Stu_MName
						<< " " << GetData.Stu_LName << " " << GetData.Age << " " << GetData.Grand << " " <<
						GetData.DigDes << " " << GetData.WebDes << " " << GetData.Network << " " << GetData.ProgrammingLang
						<< " " << GetData.Counting << " " << GetData.Database;


				}
			}
		}
	}


	return 0;
}