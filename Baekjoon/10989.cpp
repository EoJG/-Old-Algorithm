#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, idx;
	int cnt[10001] = {};

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> idx;
		cnt[idx] += 1;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1;  j <= cnt[i];  j++)
		{
			cout << i << "\n";
		}
	}

	return 0;
}