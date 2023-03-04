#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> V{1, 2, 3, 4, 5};
    vector<int> K{0, 0, 0, 0, 0};
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < V.size(); j++)
        {
            if (A[i] == V[j])
            {
                K[j]++;
            }
        }
    }

    int max = 0, t = 0;

    for (int i = 0; i < K.size(); i++)
    {
        if (K[i] > max)
        {
            max = K[i];
            t = i;
        }
    }

    cout << V[t];
}
