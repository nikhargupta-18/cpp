#include <iostream>
// there are two types of header files
/*1. system header files - it comes with the compiler
  2. user defined header files - written by the programmer*/
//  # include<UDheader.file> // UD header.file naam ki file exist krri h isliye error nhi aara
using namespace std;
int main(){
    cout<<"understanding operators in cpp";
    int a =4, b=5;
    cout<<"the value of a+b is"<<a+b<<endl;
    cout<<"the value of a-b is"<<a-b<<endl;
    cout<<"the value of a*b is"<<a*b<<endl;
    cout<<"the value of a/b is"<<a/b<<endl;// this give GIF of resultant(do integers ke beech koi arithmetic operation ka result hmesha integer hi aaega)
    cout<<"the value of a&b is"<<a%b<<endl;//this is modulo
    cout<<"the value of a++ is"<<a++<<endl;// pehle a print kro or aage ke liye hmesha a ki jagah a+1 use kro
    cout<<"the value of a-- is"<<a--<<endl;
    cout<<"the value of ++a is"<<++a<<endl;// pehle a me +1  kro phir print kro
    cout<<"the value of --a is"<<--a<<endl;

//Assignment operators - used to assign values eg-
// int z= 278, n =231;
// char d='d';
  //comparision operators
  cout<<"following are the comparision operators in cpp"<<endl;
  cout<<"the value of a==b is "<<(a==b)<<endl;
  cout<<"the value of a!=b is "<<(a!=b)<<endl;
  cout<<"the value of a>=b is "<<(a>=b)<<endl;
  cout<<"the value of a<=b is "<<(a<=b)<<endl;
  cout<<"the value of a>b is "<<(a>b)<<endl;
  cout<<"the value of a<b is "<<(a<b)<<endl;

  //logical operators
  cout<<"following are the logical operators in cpp"<<endl;
  cout<<"the value of ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<endl;//dono true hone chiiye tab jake 1  aaega and this is called logical 'and' operator
cout<<"the value of ((a==b)||(a<b)) is "<<((a==b)||(a<b))<<endl;//logical 'or' operator
cout<<"the value of (!(a==b)) is "<<(!(a==b))<<endl;   // logical'not' operator
return 0;    
}