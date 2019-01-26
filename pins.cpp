#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

/*int main()
 {
 unsigned int n, m;
 unsigned int t=0, s=0;
 unsigned long long int a, x, p, b, q, hcf, tot, num, palin_t, palin_s;
 
 cin>>n;
 vector<int> arr;
 for(int d=0;d<n;d++)
 {
 cin>>m;
 arr.push_back(m);
 }
 
 for (int d=0;d<n;d++)
 {
 t=arr[d];
 if (t>1)
 {
 s = t-1;
 }
 
 if (t%2==0)
 {   palin_t = (2*(pow(10,(t/2)) - 1));
 palin_s = ((11*pow(10,((s-1)/2))) - 2);
 }
 else{
 palin_t = ((11*pow(10,((t-1)/2))) - 2);
 palin_s = (2*(pow(10,(s/2)) - 1));
 }
 
 num = palin_t - palin_s;
 
 tot = 9 * pow(10,t-1);
 
 a = num;
 b = tot;
 while(b!=0)
 {
 x=b;
 b=a%b;
 a=x;
 }
 hcf = a;
 
 p = num/hcf;
 q = tot/hcf;
 
 cout<<p<<"\t"<<q<<"\n";
 }
 return 0;
 }
 */
