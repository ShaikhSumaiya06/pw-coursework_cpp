#include<iostream>
using namespace std;
int main(){
    // least marks out of the three student
    int a,b,c;
    cout<<"Enter 1st student marks : ";
    cin>>a;
    cout<<"Enter 2nd student marks : ";
    cin>>b;
    cout<<"Enter 3rd student marks : ";
    cin>>c;
    if(a<=b && a<=c) cout<<"A score the least marks";
    else if(b<=a && b<=c) cout<<"B score the least marks";
    else cout<<"C score the least marks.";

}