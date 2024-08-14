#include<iostream>
using namespace std;
int main(){
    // GP - 3,12,48,....upto 'n' terms
    int n;
    cout<<"How many Terms you want to display : ";
    cin>>n;
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=4;
    }
}