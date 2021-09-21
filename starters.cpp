#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int tt;
     cin>>tt;
     while(tt--)
     {
         int x;
         cin>>x;
         if(x%4 == 0)
         {
             cout<<"north"<<endl;
         }

         else if(x%4 == 1)
         {
             cout<<"East"<<endl;
         }
         else if(x%4 == 2)
         {
             cout<<"south"<<endl;
         }
         else if(x%4 == 3 )
         {
             cout<<"west"<<endl;
         }
     }
 }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,s,sec;
        cin>>n>>s;
        int maxdif = INT_MIN , diff;
        for(int i =0;i<=min(n,s);i++)
        {
            sec = s-i;
            if(sec + i == s)
            {
                if(sec<=n)
                {
                    diff = abs(sec -1);
                }
                else 
                continue;
            }

            if(diff>maxdif)
            {
                maxdif = diff;
            }

        }
        cout<<maxdif<<endl;


    }
}



#include<bits/stdc++.h>
using anmespace std;
int main()
{
    int x
}










