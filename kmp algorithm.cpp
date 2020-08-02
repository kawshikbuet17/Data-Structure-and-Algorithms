#include <bits/stdc++.h>
using namespace std;

int pi[100];
char P[100], T[100];

int prefixFunction()
{
    int now;
    pi[0] = now = -1;

    int len = strlen(P);

    for(int i=1; i<len; i++)
    {
        while(now != -1 && P[now+1] != P[i])
            now = pi[now];

        if(P[now+1]==P[i])
        {
            pi[i] = ++now;
        }
        else
            pi[i] = now = -1;
    }
}

int kmp()
{
    int now;
    now = -1;

    int n = strlen(T);
    int m = strlen(P);

    for (int i=0; i<n; i++)
    {
        while(now != -1 && P[now+1] != T[i])
            now = pi[now];

        if(P[now+1] == T[i])
            ++now;
        else
            now == -1;

        if(now == m-1)
            return 1;
    }
    return 0;
}

int main()
{
    scanf("%s", &T);
    scanf("%s", &P);
    prefixFunction();

    cout<<endl;
    if(kmp()==1)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
}
