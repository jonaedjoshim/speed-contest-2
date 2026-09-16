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

        int ans;

        if (n <= 2)
        {
            ans = 200;
        }
        else
        {
            ans = ((n + 3) / 4) * 400;

            int cab = (n + 3) / 4;

            for (int k = 1; k <= cab; k++)
            {
                int extra = max(0, n - 2 * k);
                int cost = 200 * k + 100 * extra;
                ans = min(ans, cost);
            }
        }

        cout << ans << endl;
    }

    return 0;
}