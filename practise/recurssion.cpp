//factorial


// #include<iostream>
// using namespace std;

// int fact(int a)
// {
//     if(a>0)
//     {
//         return a*fact(a-1);
//     }
//     else 
//     {
//         return 1;
//     }

// }

// int main()
// {
//     int a;
//     cin>>a;
//     cout<<fact(a);
    
// }


// taylor series

#include<iostream>
using namespace std;

int tay(int n ,int x)
{
      int s;
    if(n>0)
    {
      
        s = 1+x/n * s;
        return tay(n-1, x);


    }
    else 
    {
        return s;
    }

}


int main()
{
    int n,x;
    cin>>n>>x;
    cout<<tay(n,x);

}







