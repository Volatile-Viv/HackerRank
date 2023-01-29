#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> A, int target)
{
    int count = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] <= target)
            count++;
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> B(n);

    for (int i = 0; i < k; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < k; i++)
    {
        cout << solve(A, B[i]) << endl;
    }
}