#include<iostream>
using namespace std;
int main(){
    // check the character
    // is it an 'alphabet' or 'number' or 'special character'
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;
    int ascii = (int)ch;
    // cout<<ascii;
    if((ascii>=65 && ascii<=90 )||(ascii>=97 && ascii<=122)) cout<<ch<<" is an alphabet.";
    else if(ascii>=48 && ascii<=57 ) cout<<ch<<" is a number.";
    else cout<<ch<<" is a special character.";
}