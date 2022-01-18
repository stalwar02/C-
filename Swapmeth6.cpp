#include<iostream>
using namespace std;
int main(){
    int a=100,b=200;
    a^=b^=a^=b;
    cout<<"The Value of a is"<<a<<"The Value of b is:"<<b;
    return 0;
}
