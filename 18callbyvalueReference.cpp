#include <iostream>
using namespace std;

void swap(int a , int b){  // temp  a  b  
int temp = a ;             // 4     4  6
    a = b;                 // 4     6  6
    b = temp;              // 4     6  4

}

void swapPointers(int* x , int* y){ 
    int temp2 = *x;
    *x = *y; 
    *y = temp2;  
}

void swapreferencevar(int &x , int &y){
int temp = x ;  
    x = y;   
   y = temp; 
}

int main(){
    int a = 4 , b = 6;
    cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;

    // this code will not swap a and b , Now lets see what will! -->

    int x = 2 , y = 3;
    cout<<"the value of a is "<<x<<" the value of b is "<<y<<endl;
    //swapPointers(&x, &y); // this will swap a and b using pointer reference
    cout<<"the value of a is "<<x<<" the value of b is "<<y<<endl;

    swapreferencevar( x, y); // this will swap x and y using reference variables
    cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
     return 0;
}