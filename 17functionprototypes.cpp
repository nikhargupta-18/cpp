#include <iostream>
using namespace std;

int sum (int a,int b){  //defining a functions
    int c = a+b;
    return c;
}
int main(){
    int num1 , num2 ;
    cout<<"Enter the value of first number "<<endl;
    cin>>num1;
    cout<<"enter the value of second number "<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2); // remember that number of arguments are matching function definition
     return 0;


     //if you write the function sum after main there will be an error
    //  but sometimes we need to write the function after main. Here comes in function prototypes
//function prototypes --->



}