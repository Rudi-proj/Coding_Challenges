#include <bits/stdc++.h>

int numberOfBars = 0;
std::vector<int> barLength;

int heightOfHeighestTower = 1;
int heightOfHeighestTowerMax = 0;
int numberOfTowers = 1;


void input()
{
    int temp = 0;
    std::cin >> numberOfBars;
    for (int i = 0; i < numberOfBars; i++)
    {
        std::cin >> temp;
        barLength.push_back(temp);
    }
    barLength.shrink_to_fit();
}

void solve()
{
    sort(barLength.begin(), barLength.end());
    for(int i=0;i<barLength.size()-1;i++)
    {
        if(barLength[i] == barLength[i+1])
        {
            heightOfHeighestTower++;
        }
        else
        {
            heightOfHeighestTowerMax = std::max(heightOfHeighestTowerMax, heightOfHeighestTower);
            heightOfHeighestTower = 1;
            numberOfTowers++;
        }
    }
    heightOfHeighestTowerMax = std::max(heightOfHeighestTowerMax, heightOfHeighestTower);
}

void output()
{
    std::cout << heightOfHeighestTowerMax << " " << numberOfTowers << std::endl;
}

int main()
{
    input();
    solve();
    output();
}