#include<bits/stdc++.h>
using namespace std;

#define CITY 5
#define INF 99999999


int cost[CITY][CITY] = {
   {0, 20, 42, 25, 30},
   {20, 0, 30, 34, 15},
   {42, 30, 0, 10, 10},
   {25, 34, 10, 0, 25},
   {30, 15, 10, 25, 0}
};

int VISIT_ALL = (1 << CITY) - 1;
int dp[1<<CITY][CITY];   // dp[2^n][n]

//mask = friends already visited
//at = akhon kothay achi

int travelling_salesman_dp(int mask, int pos)
{
    if(mask == VISIT_ALL)
        return cost[pos][0];

    if(dp[mask][pos] != -1)
        return dp[mask][pos];

    int finalCost = INF;

    for(int i=0; i<CITY; i++)
    {
        if( (mask & (1<<i)) == 0)
        {
            int tempCost = cost[pos][i] + travelling_salesman_dp(mask | (1<<i), i);
            finalCost = min(finalCost, tempCost);
        }
    }
    dp[mask][pos] = finalCost;
    return finalCost;
}

int main()
{
    int row = (1 << CITY), col = CITY;
    for(int i = 0; i<row; i++)
        for(int j = 0; j<col; j++)
            dp[i][j] = -1;    //initialize dp array to -1

    cout << "Distance of Travelling Salesman: ";
    cout <<travelling_salesman_dp(1, 0);    //initially mask is 0001, as 0th city already visited
}


