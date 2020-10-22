#include <bits/stdc++.h>
using namespace std;
void pairs(int ar[], int n)
{
    int cnt = 0, c[n], i = 0;
    sort(ar, ar + n);
    while (i < n)
    {
        if (ar[i] == ar[i + 1])
        {
            cnt++;
            i += 2;
        }
        else
        {
            i += 1;
        }
    }
    cout << cnt << "\n";
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    pairs(ar, n);
    return 0;
}