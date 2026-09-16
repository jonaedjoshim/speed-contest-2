#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, b;
    cin >> r >> b;

    int green = min(r, b);
    r -= green;
    b -= green;

    cout << r + 2 * b + 5 * green << endl;

    return 0;
}