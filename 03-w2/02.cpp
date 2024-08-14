#include<iostream>
using namespace std;
int main(){
    // is area of circle larger than circumference of a circle
    int r;
    cout<<"Enter the radius : ";
    cin>>r;
    float area,circumference,PI=3.14;
    area=PI*r*r;
    circumference = 2*PI*r;
    if(area>circumference){ 
        cout<<"Area is larger than circumference of a circle";
        cout<<"Area : "<<area<<endl;
        cout<<"Circumference : "<<circumference<<endl;
    }
    else {
        cout<<"Circumference is larger than the area of a circle.";
        cout<<"Area : "<<area<<endl;
        cout<<"Circumference : "<<circumference<<endl;
    }

}