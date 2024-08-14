#include<iostream>
using namespace std;
int main(){
    // AP- 4,7,10,13,16... upto 'n' terms
    int n;
    cout<<"How many Terms you want to display : ";
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=3;
    }
}