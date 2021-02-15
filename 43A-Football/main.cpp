#include <bits/stdc++.h>

int main()
{
    int numberOfLines = 0;
    std::cin >> numberOfLines;
    std::vector<std::string> goals;

    std::string teamName_1;
    std::string teamName_2;
    int score_1 = 0;
    int score_2 = 0;

    for (int i = 0; i < numberOfLines; i++)
    {
        std::cin >> teamName_1;
        goals.push_back(teamName_1);
    }
    teamName_1 = goals[0];

    while (numberOfLines--)
    {
        if (goals[numberOfLines] != teamName_1)
        {
            score_2++;
            teamName_2 = goals[numberOfLines];
        }
        else
        {
            score_1++;
        }
    }

    std::cout << ((score_1>score_2) ? teamName_1 : teamName_2) << std::endl;

    return 0;
}