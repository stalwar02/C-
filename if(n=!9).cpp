#include <iostream>
using namespace std;

int main()
{
int n;
abc:
cout<<"Enter a No:";
cin>>n;
if(n!=99)
{
goto abc;
}
cout<<"\nGood Work . . .";
return 0;
}
