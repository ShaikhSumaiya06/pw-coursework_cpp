#include<iostream>
using namespace std;
int main(){
    // is area of rectangle larger than its perimeter
    int l,b;
    cout<<"Enter the length of rectangle : ";
    cin>>l;
    cout<<"Enter the breadth of rectangle : ";
    cin>>b;
    int area,perimeter;
    area=l*b;
    perimeter=2*(l+b);
    cout<<"Area : "<<area<<endl;
    cout<<"Perimeter : "<<perimeter<<endl;
    if(area>perimeter) cout<<"Area is greater than perimeter.";
    else cout<<"Perimeter is greater than area.";    
}