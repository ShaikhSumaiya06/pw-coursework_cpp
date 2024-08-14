#include<iostream>
using namespace std;
int main(){
    // whether the triangle is equilateral,scalene or isosceles triangle.
    int a,b,c;
    cout<<"Enter the 1st side : ";
    cin>>a;
    cout<<"Enter the 2nd side : ";
    cin>>b;
    cout<<"Enter the 3rd side : ";
    cin>>c;
    if(a==b && b==c) cout<<"Equilateral triangle.";
    else if(a==b || b==c || c==a) cout<<"Scalene triangle.";
    else cout<<"Scalene triangle.";    
}