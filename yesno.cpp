#include <iostream>
using namespace std;

int main()
{
char n;
abc:
cout<<"Enter a Y/N:";
cin>>n;
if(n!='y')
{
goto abc;
}
cout<<"\nGood Work . . .";
return 0;
}
