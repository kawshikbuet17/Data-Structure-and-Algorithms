#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"----------Main Map----------"<<endl;

    map<string, int> cse;
    cse["Fahim"] = 1705002;
    cse["Iftekhar"] = 1705045;
    cse["Kawshik"] = 1705043;

    cout<<"Map Size : "<<cse.size()<<endl;
    cout<<"cse[Kawshik] = "<<cse["Kawshik"]<<endl;
    cout<<endl;

    for(auto i : cse)
        cout<<i.first<<" = "<<i.second<<endl;
    cout<<endl;


    cout<<"-----Ulta map (reverse function nai)-----"<<endl;
    map<int, string>cse_ulta;
    for(auto i : cse)
    {
        cse_ulta[i.second] = i.first;
    }
    cout<<endl;

    for(auto i : cse_ulta)
        cout<<i.first<<" = "<<i.second<<endl;
    cout<<endl;
}

/*
Output:

----------Main Map----------
Map Size : 3
cse[Kawshik] = 1705043

Fahim = 1705002
Iftekhar = 1705045
Kawshik = 1705043

-----Ulta map (reverse function nai)-----

1705002 = Fahim
1705043 = Kawshik
1705045 = Iftekhar

*/
