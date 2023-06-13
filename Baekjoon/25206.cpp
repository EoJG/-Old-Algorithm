#include <iostream>
#include <string>
#include <sstream>

using namespace std;

float GradeChecker(string str);

int main()
{
	string str;
	string a, b, c;
	float credit = 0, grade = 0, sumCredit = 0, cxg = 0;

	for (int i = 0; i < 20; i++)
	{
		getline(cin, str);
		stringstream ss(str);
		ss >> a >> b >> c;

		if (c == "P")
			continue;
		
		grade = GradeChecker(c);

		credit = strtof(b.c_str(), nullptr);

		cxg += grade * credit;
		sumCredit += credit;
	}

	cout << cxg / sumCredit;
}

float GradeChecker(string str)
{
	float grade = 0;

	if (str == "A+")
		grade = 4.5;
	else if (str == "A0")
		grade = 4;
	else if (str == "B+")
		grade = 3.5;
	else if (str == "B0")
		grade = 3;
	else if (str == "C+")
		grade = 2.5;
	else if (str == "C0")
		grade = 2;
	else if (str == "D+")
		grade = 1.5;
	else if (str == "D0")
		grade = 1;
	else
		grade = 0;

	return grade;
}