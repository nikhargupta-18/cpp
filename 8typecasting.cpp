#include <iostream>
using namespace std;
int c = 278;
int main(){
    // int a , b ,c ;
    // cout<<"the value of a is "<<endl;
    // cin>>a;
    // cout<<"the value of b is "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"the value of c is "<<c<<endl;
    // cout<<"the value of global c is "<<::c;// :: is scope resolution operator

float d = 3.1f;
long double e = 3.1l;
// cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;
// 3.1 by default double kehlaega not float agr iske aage f laga de- 3.1f ab yefloat h
// or agr 3.1l likhenge to long double hoga vo     
/*cout<<"the size of 3.1 is "<<sizeof(3.1)<<endl;
cout<<"the size of 3.1l is "<<sizeof(3.1l)<<endl;
cout<<"the size of 3.1f is "<<sizeof(3.1f)<<endl;
cout<<"the size of 3.1F is "<<sizeof(3.1F)<<endl;
cout<<"the size of 3.1L is "<<sizeof(3.1L)<<endl;*/

//REFERENCE VARIABLES - ek hi var ko alag alag naamo se
// Nikhar ----> nikhu -----> coba -----> nishu 
/*float nikhar = 23;
cout<<nikhar<<endl;
float & nishu = nikhar;
cout<<nishu;*/

// TYPECASTING -------->
int g =328;
long double v = 32.232;
cout<<"the value of g is "<<(float)g<<endl;
cout<<"the value of v is "<<(int)v<<endl;// int lagane se integer hogya
cout<<"the value of v is "<<int(v)<<endl;// same cheez h bracket kahi bi lagao
int t = int (v);
cout<<"the value of t+g is "<<t+g<<endl;
cout<<"the value of v+g is "<<v+g<<endl ;
cout<<"the value of v+g is "<<g+(int)v<<endl;

return 0;
}