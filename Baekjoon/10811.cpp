#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, m;
	int x, y;
	int arr[100];

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;
		for (int j = 0; j <= ((y - x) / 2); j++)
		{
			swap(arr[(x - 1) + j], arr[(y - 1) - j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}