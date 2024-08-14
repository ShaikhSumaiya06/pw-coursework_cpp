#include<iostream>
using namespace std;
int main(){
    /*
    given three points (x1,y1),(x2,y2) and (x3,y3)
    write a program to check if all the three points fall on one straight line.
    eg: x1=1 , y1=2 , x2=2 , y2=3 , x3=3 , y3=4
    op: all three lie on the same line;
     */
    float x1,x2,x3,y1,y2,y3,slope1,slope2;
    cout<<"Enter the x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter the x2 and y2 : ";
    cin>>x2>>y2;
    cout<<"Enter the x3 and y3 : ";
    cin>>x3>>y3;
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2) cout<<"All 3 points lie on the same line";
    else cout<<"All 3 point do not lie on the same line.";   
}