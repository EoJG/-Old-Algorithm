#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int result = 0;

	cin >> str;
	if (str.length() == 1)
	{
		cout << 1;
	}
	else
	{
		for (int i = 0; i < str.length() / 2; i++)
		{
			if (str[i] == str[(str.length() - i) - 1])
			{
				result = 1;
			}
			else
			{
				result = 0;
				break;
			}
		}

		cout << result;
	}
}