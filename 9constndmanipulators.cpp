#include <iostream>
using namespace std;
#include <iomanip>
int main(){
    /*int a = 32;
    char c = 'c';
    cout<<"the value of a was "<<a<<endl;
    cout<<"the value of c was "<<c<<endl;
    c = '4';
    a=45;
    cout<<"the value of a is "<<a<<endl;    
    cout<<"the value of c is "<<c<<endl; */
    //constants in cpp
    //const int v = 21;// int float double kuch bhi lelo
    //cout<<"the value of v was"<<v<<endl;
    //v = 231; //ab isko commment se hataega to error dikhaega cuz v ab read only var. h
    //agr apn chahte hai ki koi cheez change na ho galti se bhi to pehle hi const krdo
    
    //MANIPULATORS-----> endl bhi manip. hai

    /*int p = 3 , q= 12 , r = 1233;
    cout<<"the value of p without setw is "<<p<<endl;   
    cout<<"the value of p without setw is "<<q<<endl;
    cout<<"the value of p without setw is "<<r<<endl;
    cout<<"the value of p with setw is "<<setw(4)<<p<<endl;
    cout<<"the value of p with setw is "<<setw(4)<<q<<endl;
    cout<<"the value of p with setw is "<<setw(4)<<r<<endl;*/
         

    // OPERATOR PRECEDENCE ---> https://en.cppreference.com/w/cpp/language/operator_precedence.html
    int a = 4 , b =5;
    int c = a*5 + b;
    int d = a*42 +b -32+432;
    cout<<c<<endl;
    cout<<d;
          return 0;
}