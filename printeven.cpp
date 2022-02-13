using namespace std;

int main()
{
int i=2,n;
cout<<"Enter Limit:";
cin>>n;
L:
cout<<i<<endl;
i++;
i++;
if(i<=n)
{
goto L;
}
cout<<"\nGood Work . . .";
return 0;
}
