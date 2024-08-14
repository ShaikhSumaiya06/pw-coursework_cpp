#include<iostream>
using namespace std;
int main(){
    /*
    WAP to print all the ASCII values and their equivalent 
    characters of 26 alphabets using a while loop.
    */
   for(int i=65 ;i<=90;i++){
        cout<<(char)i<<" : "<<i<<endl;
   } for(int i=97 ;i<=122;i++){
        cout<<(char)i<<" : "<<i<<endl;
   }
}