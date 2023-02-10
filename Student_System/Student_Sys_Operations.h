#pragma once
#include <iostream>

using namespace std;

class Operations
{
private:
	struct Data
	{
		string Stu_ID;
		string Stu_FName, Stu_MName, Stu_LName, Grand;
		float DigDes, WebDes, Network, Database, Counting, ProgrammingLang, Age;

	}GetData;

public:
	int CreateFile();
	int DisplayData();
	int SearchData();
	int CounterData();
	//int Update();
	int DeleteData();
}GetFunction;


