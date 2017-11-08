#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
    int n;
    string a="abcdefghijklmnopqrstuvwxyz";
    string A="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s=")(*&^%$#@!";
    string d="1234567890";
    string password="";
    int x=getpid();
    int y=getppid();
    n=x*y;
    int e=n%100;
    n=n/100;
    if(e<12)
        e=12;
    else if(e>32)
        e=32;
    int h=n%10;
    h=h*999;
    h=h%26;
    n=n/10;
    password+=a[h];
    for(int i=2;i<e;i=i*5)
    {
        int g=n%10;
        g=g*999;
        g=g%26;
        password+=a[g];
        g=g*289;
        g=g%26;
        password+=a[g];
        g=g*556;
        g=g%26;
        password+=A[g];
        g=g*667;
        g=g%26;
        password+=A[g];
        n=n/10;
        password+=s[n%10];
        n=n/10;
        password+=d[n%10];
    }
    h=h*556;
    h=h%26;
    password+=A[h];
    cout<<password<<endl;
    return 0;
}
