#include<iostream>
using namespace std;
int main()
{
int i=1,sum=0,n;
cout<<"Enter a integer number:-";
cin>>n;
start:
if(i<=n)
{
cout<<i<<endl;
sum=sum+i;
i++;
goto start;
}
cout<<"sum = "<<sum;
return 0;
}
