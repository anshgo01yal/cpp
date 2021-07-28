// #include<iostream>
// using namespace std;
//  int main()
//  {
//      int t;
//      cin>>t;
//      for(int i =0;i<t;i++)
//      {
//          int a,b;
//          cin>>a>>b;
//          if(a+b<3)
//          {
//              cout<<1<<endl;
//          }
//          else if(a+b>= 3 && a+b <= 10)
//          {
//              cout<<2<<endl;
//          }
//          else if(a+b>= 11 && a+b <= 60)
//          {
//              cout<<3<<endl;
//          }
//          else if(a+b>60)
//          {
//              cout<<4<<endl;
//          }
//      }
//  }




// #include<iostream>
// using namespace std;
// int main()
// {

//     int t;
//     cin>>t;
//     for(int i =0;i<t; i++)
//     {
//         int e, k, m , count =0;
//         cin>>e>>k;
        
//             while(e>0)
//             {
//                 count++;
//                 e = e/k;
//             }
//         cout<<count<<endl;   
//         }
        
//     }

//Maximum Array Xor 

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i =0;i<t ;i++)
//     {

//         int n;
//         double k;
//         cin>>n>>k;
//         if(k ==0)
//         {
//             cout<<0<<endl;
//         }
//         int a[pow(2,n)];
//         for(int j =0;j<pow(2,n);j++)
//         {
//             a[j]=j;

//         }
        


//     }
// }


// ceiling sum

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i =0;i<t ;i++)
    {
       float max, min;
        int a , b, m;
       scanf("%d%d",&a,&b);
        if(a>b)
        {
            max =a;
            min =b;
        }
        else if(a<b)
        {
            max =b;
            min =a;
        }
        else if(a==b)
        {
            max = a;
            min =a;
        }

    for(int i =min;i<=max; i++)   
    {
        m =ceil((b-min)/2) + ceil((min-a)/2);
        
        
        if(m> (ceil((b-i)/2) + ceil((i-a)/2)))
        {
            m = (ceil((b-i)/2) + ceil((i-a)/2));
              cout<<m;

        }


    }

    printf("%d\n",m);

    
}
}


