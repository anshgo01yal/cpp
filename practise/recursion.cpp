#include<bits/stdc++.h>
using namespace std;

// taylor series.
float tay(int x , int n)

{
    static float s;
    if(n == 0)
    {
        return s;
    }
    else
    {
        s = 1 + s/n*x;
        return tay(x,n-1);
 
    }
}

//fibonnaci series

int fib(int n)
{
    if(n>2)
    {
        return fib(n-2) + fib(n-1);
    }
    else if (n==1 || n == 2)
    {
        return 1;

    }
    else
    {
        return 0;
    }
}

// combination formula

int ncr(int n, int r)
{
    if(r==0 || n == r)
    {
        return 1;
    }
    else 
    {
        return ncr(n-1 ,r-1) + ncr(n-1 , r);
    }
}



 int main()
 {
     int a,b;
     cin>>a>>b;
    //  cout<<tay(a,b);
    //  cout<<fib(a);
      cout<<ncr(a,b);
 }