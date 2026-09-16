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

        vector<long long> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int flag = 1;

        for (int i = 1; i < n; i++)
        {
            if (b[i - 1] % b[i] != 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << b[i];

                if (i + 1 < n)
                {
                    cout << " ";
                }
            }

            cout << endl;
        }
    }

    return 0;
}