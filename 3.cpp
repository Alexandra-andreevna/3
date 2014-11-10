#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
 int a,b,i,j,k,m,l,c,d,n;
 int arr[10][10];
 cout<<"enter a,b"<<endl;
 cin>>a;
 cin>>b;
c=a;
d=b;
 m=a*b;
 n=1;
 l=1;
 k=1;
 do 
 {
  for (i=1; i<a; i++)
  {
   arr[i][j]=k;
   k=k+1;
  };
  for (j=1; j<b; j++)
  {
   arr[i][j]=k;
   k=k+1;
  };
  for (i=a; i>n; i--)
  {
   arr[i][j]=k;
   k=k+1;
  };
  for (j=b; j>l; j--)
  {
   arr[i][j]=k;
   k=k+1;
  };
 a=a-1;
 b=b-1;
 n=n+1;
 l=l+1;
}
 while (k!=m);
for (i=1; i<c; i++)
 {
 for (j=1; j<d; j++)
  cout<<arr[i][j]<<" ";
 cout<<endl;
}
}
