#include<bits/stdc++.h>
using namespace std;

int main()
{
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


    map<int, string> cse17;
    cse17[1705002] = "Fahim";
    cse17[1705045] = "Iftekhar";
    cse17[1705043] = "Kawshik";

    cout<<"Map Size : "<<cse17.size()<<endl;
    cout<<"cse17[1705043] = "<<cse17[1705043]<<endl;
    cout<<endl;

    for(auto i : cse17)
        cout<<i.first<<" = "<<i.second<<endl;

    return 0;
}

/*
Output:

Map Size : 3
cse[Kawshik] = 1705043

Fahim = 1705002
Iftekhar = 1705045
Kawshik = 1705043

Map Size : 3
cse17[1705043] = Kawshik

1705002 = Fahim
1705043 = Kawshik
1705045 = Iftekhar
*/
