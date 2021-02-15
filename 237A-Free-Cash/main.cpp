#include <bits/stdc++.h>

using namespace std;

int numberOfVisitors = 0;
int numberOfCashiers = 0;
vector<int> visitTime;

void input()
{
    cin >> numberOfVisitors;
    int temp_h = 0;
    int temp_m = 0;
    for (int i = 0; i < numberOfVisitors; i++)
    {
        cin >> temp_h;
        cin >> temp_m;
        temp_m += 60 * temp_h;
        visitTime.push_back(temp_m);
        temp_m = 0;
        temp_h = 0;
    }
}

void solve()
{
    int duplicate = 0;
    int duplicate_max = 0;
    for (int i = 0; i < visitTime.size() - 1; i++)
    {
        if (visitTime[i] == visitTime[i + 1])
        {
            duplicate++;
        }
        else
        {
            duplicate_max = max(duplicate_max, duplicate);
            duplicate = 0;
        }
    }
    duplicate_max = max(duplicate_max, duplicate);
    numberOfCashiers = duplicate_max + 1;
}

void output()
{
    cout << numberOfCashiers;
}

int main()
{
    input();
    solve();
    output();
    return 0;
}