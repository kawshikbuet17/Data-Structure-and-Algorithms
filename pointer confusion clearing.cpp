#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"x y"<<endl;
    int* x;
    int* y = new int;

    *y = 10;
    cout<<"Position: " << y << " ----- Value: "<< *y <<endl;

    x = y;
    cout<<"Position: " << x << " ----- Value: "<< *x <<endl;

    *y = 20;
    cout<<"Position: " << y << " ----- Value: "<< *y <<endl;
    cout<<"Position: " << y << " ----- Value: "<< *y <<endl;

    cout<<"p q"<<endl;
    int* p = new int;
    int* q = new int;

    *q = 30;
    cout<<"Position: " << q << " ----- Value: "<< *q <<endl;

    p = q;
    cout<<"Position: " << p << " ----- Value: "<< *p <<endl;

    *q = 40;
    cout<<"Position: " << q << " ----- Value: "<< *q <<endl;
    cout<<"Position: " << p << " ----- Value: "<< *p <<endl;

    q = y;
    cout<<"Position: " << q << " ----- Value: "<< *q <<endl;
    cout<<"Position: " << p << " ----- Value: "<< *p <<endl;

    cout<<"m n"<<endl;
    int* m;
    int* n = new int;

    *n = 50;
    cout<<"Position: " << n << " ----- Value: "<< *n <<endl;

    m = n;
    cout<<"Position: " << m << " ----- Value: "<< *m <<endl;

    *n = 60;
    cout<<"Position: " << n << " ----- Value: "<< *n <<endl;
    cout<<"Position: " << m << " ----- Value: "<< *m <<endl;

    n = y;
    cout<<"Position: " << n << " ----- Value: "<< *n <<endl;
    cout<<"Position: " << m << " ----- Value: "<< *m <<endl;
}



/*
x y
Position: 0x760d98 ----- Value: 10
Position: 0x760d98 ----- Value: 10
Position: 0x760d98 ----- Value: 20
Position: 0x760d98 ----- Value: 20
p q
Position: 0x760ea8 ----- Value: 30
Position: 0x760ea8 ----- Value: 30
Position: 0x760ea8 ----- Value: 40
Position: 0x760ea8 ----- Value: 40
Position: 0x760d98 ----- Value: 20
Position: 0x760ea8 ----- Value: 40
m n
Position: 0x760e48 ----- Value: 50
Position: 0x760e48 ----- Value: 50
Position: 0x760e48 ----- Value: 60
Position: 0x760e48 ----- Value: 60
Position: 0x760d98 ----- Value: 20
Position: 0x760e48 ----- Value: 60
*/

