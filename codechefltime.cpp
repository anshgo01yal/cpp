// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int tt;
//     cin>>tt;
//     while(tt--)
//     {
//         int a,b,x;
//         cin>>a>>b>>x;
//         cout<<(b-a)/x<<endl;
//     }

// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
       int n , d , h;
       cin>>n>>d>>h;
       int ar[n];
       for(int i = 0 ; i < n ; i++)
       {
           cin>>ar[i];
       }

       int ans = 0;
       for(int i =0;i<n;i++)
       {
           if(ar[i]>0)
           {
               ans = ans + ar[i];
           }
           else if(ar[i] == 0 && ans >= d)
           {
               ans = ans - d;
           }
           else if(ar[i] == 0 && ans < d)
           {
               ans = 0;
           }
           
       }
       if(ans > h)
       {
           cout<<"yes"<<endl;
       }
       else 
       {
           cout<<"no"<<endl;
       }
    }
}
    

