#include <iostream>
using namespace std;

int main()
{
int i=1,n,sum=0;
cout<<"Enter Limit:";
cin>>n;
L:
cout<<i<<"+";
sum=sum+i;
i++;
if(i<=n)
{
goto L;
}
cout<<"\b="<<sum;
cout<<"\nGood Work . . .";
return 0;
}
