#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        int flag =0;
        if(a + b<=d && c<= e)
        {
            flag = 1;
        }
        else if(a + c <= d && b<= e)
        {
            flag = 1;
        }
        else if(b + c <= e && a <= e)
        {
            flag =1 ;
        }


        if(flag == 1)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    
    }
}