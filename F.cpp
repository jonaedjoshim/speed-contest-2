#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int flag = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                cout << i + 1 << " " << i + 2 << endl;
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}