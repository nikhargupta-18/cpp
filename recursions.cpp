#include <iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;}
        return n * factorial(n-1);
        //fibonacci sequence nth term-->
    }
int fibonacci(int z){
    if (z<2){
        return 1;
    }
    return fibonacci(z-1)+fibonacci(z-2);
}
    

int main(){
    int a;
cout<<"type in a number \n";
cin>>a;
// cout<<"the factorial of "<<a<<" is "<<factorial(a);
cout<<"the term in fib sequence at postion "<<a<<" is "<<fibonacci(a);


    return 0;
}
