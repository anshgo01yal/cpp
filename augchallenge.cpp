// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int tt;
//     cin>>tt;
//     while(tt--)
//     {
//         int g1,s1,b1,g2,s2,b2;
//         cin>>g1,s1,b1,g2,s2,b2;
//         if((g1+s1+b1)> (g2+s2+b2))
//         {
//             cout<<1<<endl;
//         }
//         else
//         {
//             cout<<2<<endl;
//         }

//     }
// }




#include<iostream>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
            if(a == b && b == c && c==d)
            {
                cout<<0<<endl;
            }
            else if( (a == b && b == c) || (b == c  &&  c == d)  )
            {
                cout<<1<<endl;

            }
            else{
                cout<<2<<endl;
            }
        }
}