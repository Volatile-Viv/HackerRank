#include <iostream>
using namespace std;

int main()
{
	int n, s, count = 0;
	cout << "Enter the number of rows and columns --> ";
	cin >> n;

	cout << "Enter the value to search --> ";
	cin >> s;

	int A[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter the value --> ";
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i == j) && (A[i][j] == s))
			{
				count++;
			}
			if ((i + j == n - 1) && (A[i][j] == s))
			{
				count++;
			}
		}
	}

	cout << "Total occurance --> " << count << endl;

	return 0;
}