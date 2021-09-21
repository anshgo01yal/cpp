// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int tt;
//     cin>>tt;

//     while(tt--)
//     {
//         int x;
//         cin>>x;
//         if(x>=2000)
//         {
//             cout<<1<<endl;
//         }
//         else if(x>=1600 && x<2000)
//         {
//             cout<<2<<endl;
//         }
//         else 
//         {
//             cout<<3<<endl;
//         }
//     }
// }


//q2


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     int tt;
//     cin>>tt;
//     while(tt--)
//     {
//         ll n;
//         cin>>n;
//         ll  a[n];
//         for(int i =0;i<n;i++)
//         {
//             cin>>a[i];

//         }
//         unordered_map<ll,ll>mp;
//         for(ll i =0 ;i<n;i++)
//         {
//             mp[a[i]]++;
//         }
//         ll maxx=0;
//         for(auto x : mp)
//         {
//             maxx = max(maxx,x.second);
//         }

//         if(n<=2)
//         {
//             cout<<0<<endl;
//         }
//         else if(maxx == 1)
//         {
//             cout<<n-2<<endl;
//         }
//         else{
//             cout<<n - maxx<<endl;
//         }
//     //     int n,scount=0, tcount =0 ;
//     //     string s , t;
//     //     cin>>n;
//     //     cin>>s>>t;
//     //     for(int i =0 ; i<n;i++)
//     //     {
//     //         if(s[i] == '1' )
//     //         scount++;
//     //     }
//     //     for(int i =0 ; i<n;i++)
//     //     {
//     //         if(t[i] == '1' )
//     //         tcount++;
//     //     }

//     //     if(scount>tcount)
//     //     {
//     //         cout<<tcount<<endl;
//     //     }
//     //     else if(scount<tcount)
//     //     {
//     //         cout<<scount<<endl;
//     //     }
//     //     else if(scount == tcount)
//     //     {
//     //         cout<<scount<<endl;
//     //     }

        
//     // }
// }
// }


#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int i,n;
 cin>>n;
 vector<string> str(n,".");
 for(i=0; i<n;i++)
 {
  cin>> str[i];
 }
 string ans = "";
 for(i=0; i<n;i++)
 {
  if(str[i][i] == '0'){
   ans += '1';
  }
  else{
   ans += '0';
  }
 }
 cout<<ans<<endl;
    }
    return 0;
}