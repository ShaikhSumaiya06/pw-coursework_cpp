// wap for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float r, h;// 3 5.1
    cout<<"Enter the radius : ";
    cin>>r;
    cout<<"Enter the height : ";
    cin>>h;
    float PI = 3.1415;
    float volume = PI*r*r*h;
    cout<<"Volume of the cylinder : "<<volume;
}