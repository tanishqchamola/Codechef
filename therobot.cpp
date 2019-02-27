/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short int t=0;
    cin>>t;
    unsigned long long result[t][2];
    
    for (unsigned short int i=0; i<t; i++)
    {
        unsigned long int n,hcf=0;
        cin>>n;
        
        unsigned long long int total = pow(2,n);
        unsigned long long int collide = total - 2;
        
        if (collide==0)
        {
            hcf=total;
        }
        else{
            hcf = __gcd(total,collide);
        }
        
        total = total/hcf;
        collide = collide/hcf;
        
        result[i][0]=collide;
        result[i][1]=total;
    }
    
    for (unsigned short int i=0; i<t; i++)
    {
        cout<<result[i][0]<<"/"<<result[i][1]<<"\n";
    }
    
    
    return 0;
}
*/
