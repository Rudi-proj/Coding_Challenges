#include <bits/stdc++.h>

using namespace std;
string in;
string out = "";
char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
bool isVowel = false;

void input()
{
    cin >> in;
}

void solve()
{
    //all lower case
    for (int i = 0; i < in.length(); i++)
    {
        in[i] = tolower(in[i]);
    }
    for (int i = 0; i < in.length(); i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (in[i] == vowels[j])
            {
                isVowel = true;
            }
        }

        if (!isVowel)
        {
            out.append(1, '.');
            out.append(1, in[i]);
        }
        isVowel = false;
    }
}

void output()
{
    cout << out;
}

int main()
{
    input();
    solve();
    output();
    return 0;
}