#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int ref = 1;
	int max = 1;

	while (true)
	{
		if (n <= max)
			break;

		max += 6 * ref;
		ref++;
	}

	cout << ref << "\n";
	
	return 0;
}