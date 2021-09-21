#include<bits/stdc++.h>
using namespace std;


int tay(int x , int n)
{
    int s;
    if(x > 0)
    {
       
       s = 1 + x/n*s;
       return tay(x,n - 1);
    }
    else
    {
        return s;
    }
}

int main()
{
    int x;
    cin>>x;
    cout<<tay(x ,10);
   
}