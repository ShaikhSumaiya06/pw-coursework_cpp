#include<iostream>
using namespace std;
int main(){
    // print the table of 'n'. here 'n' is an integer which the user will input.
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=n;i<=n*10;i+=n) cout<<n<<"X"<<1<<"="<<i<<endl;
}