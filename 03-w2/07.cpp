#include<iostream>
using namespace std;
int main(){
    /*
    given a point (x,y) write a program to find out 
    if it lies on the x-axis, y-axis or at the origin,viz(0,0)
    */
   int x,y;
   cout<<"Enter the x co-ordinate : ";
   cin>>x;
   cout<<"Enter the y co-ordinate : ";
   cin>>y;
   if(x==0 && y==0) cout<<"co-ordinates ("<<x<<","<<y<<") lie at the origin.";
   else if(x!=0 && y==0)  cout<<"co-ordinates ("<<x<<","<<y<<") lie on the x-axis.";
   else if(x==0 && y!=0)  cout<<"co-ordinates ("<<x<<","<<y<<") lie on the y-axis.";
   else if(x!=0 && y!=0) cout<<"co-ordinates ("<<x<<","<<y<<") lie on the plane.";
   else cout<<"Invalid co-ordinates.";
}