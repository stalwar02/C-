#include <iostream>
using namespace std;

int main()
{
int n,f=1;
cout<<"Enter a no:";
cin>>n;
switch (n)
{
case 5:
f=f*5;
case 4:
f=f*4;
case 3:
f=f*3;
case 2:
f=f*2;
case 1:
case 0:
cout<<"Factorial = "<<f<<endl;
break;
default:
cout<<"Wrong no . . .";
}
cout<<"\nBye...";
return 0;
}
