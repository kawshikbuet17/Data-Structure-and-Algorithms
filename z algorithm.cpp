#include<bits/stdc++.h>
using namespace std;

// Brute Force or Trivial Z Algorithm, O(n^2)
vector<int> trivial_z_algo(string s)
{
    int n = s.length();
    vector<int>z(n);

    z[0] = 0;                                          //first element default zero

    for (int i=1; i<n; i++)                            //loop from second element
    {
        while(i+z[i] < n && s[z[i]] == s[i + z[i]])    //while first bar cholar somoy z[i]=0 pabe
        {
            ++z[i];                                    //porpor match pele z[i] er maan o barbe
        }
    }
    return z;
}

// Main Z Algorithm , O(n)
vector<int> z_function(string s)
{
    int n = s.length();
    vector<int> z(n);

    z[0] = 0;

    for (int i=1, left=0, right=0; i<n; i++)
    {
        if(i <= right)                              // i সিগমেন্টের ভিতরে তা প্রথমেই চেক করে নিলাম
            z[i] = min(right-i+1, z[i-left]);       // সিগমেন্টে z[i] = z[i-L] থেকে কম বা সমান হতে পারে *শর্ত চেক, plus 1 karon i nijekeo count korbe
        else
            z[i]=0;                                 // i সিগমেন্টের অংশ না হলে Z[i] এর মান শুন্য, মানে আমাদের Z[i] এর মান হিসাব করতে হবে।

        while(i+z[i] < n && s[z[i]] == s[i+z[i]])   // সিগমেন্টের বাহিরেও যদি অতিরিক্ত ক্যারেক্টার মিলে যায় তাহলে Z[i] এর মান বাড়াবো
            ++z[i];

        if(i+z[i]-1>right)                          // minus 1 karon i soho count hoy z[i] er maan. tai last e ekta baad dite hbe
        {
            left = i;
            right = i+z[i]-1;                       // নতুন সিগমেন্ট পেলে সিগমেন্ট রেঞ্জ আপডেট করবো ।
        }
    }
    return z;
}


int main()
{
    string s;
    cin>>s;
    vector<int>z1 = trivial_z_algo(s);
    vector<int>z2 = z_function(s);

    for(auto x: z1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x: z2)
    {
        cout<<x<<" ";
    }
}
