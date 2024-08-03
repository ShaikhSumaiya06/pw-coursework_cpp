// finding the output of the following code
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number : ";
    cin>>x;
    int y,m;
    cout<<"Enter second number and value for taking modulus : ";
    cin>>y>>m;
    int z = (x*y)%m;
    cout<<"OUtput is : "<<z;
    // input : 2 3 6
    // output : 0
}