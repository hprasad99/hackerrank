#include <bits/stdc++.h>
using namespace std;
void countingValleys(char path[], int steps)
{
    int i = 0, sea = 0, cnt = 0;
    while (i < steps)
    {
        if (path[i] == 'U')
        {
            if (sea == -1)
                cnt++;
            sea++;
        }
        else
        {
            sea--;
        }
        i++;
    }
    cout << cnt << "\n";
}
int main()
{
    int steps;
    cin >> steps;
    char path[steps];
    for (int i = 0; i < steps; i++)
    {
        cin >> path[i];
    }
    countingValleys(path, steps);
    return 0;
}