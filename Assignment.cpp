#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter value1:";
cin>>a;
cout<<"Enter value2:";
cin>>b;
a=a^b;
b=b^a;
a=a^b;
cout<<"A = "<<a<<" B = "<<b;
return 0;
}
