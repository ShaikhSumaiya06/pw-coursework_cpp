#include<iostream>
using namespace std;
int main(){
    // is year is leap year
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    // leap year if perfectly divisible by 400
    if(year%400==0) cout<<year<<" is a leap year.";
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if(year % 100 == 0) cout<<year<<" is not a leap year.";
    // leap year if not divisible by 100
    // but divisible by 4
    else if(year%4==0) cout<<year<<" is a leap year.";
    // all other year are not leap years
    else cout<<year<<" is not a leap year.";
}