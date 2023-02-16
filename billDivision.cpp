#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, charged, sum = 0;
    cin >> n;
    cin >> k;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cin >> charged;

    for (int i = 0; i < n; i++)
    {
        if (i == k)
        {
            continue;
        }
        sum += A[i];
    }

    sum = sum / 2;

    if (sum == charged)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << charged - sum;
    }
}