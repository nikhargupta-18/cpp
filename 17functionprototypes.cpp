#include <iostream>
using namespace std;
// Function prototype
// type function_name (arguments)

//int sum (int a , int b) ---> acceptable
//int sum (int a ,b) ---> not acceptable
int sum (int a,int b){  //defining a function
    int c = a+b;
    return c;  // 8 , 9 , 10th line ko main ke baad likhte to bhi fark nhi pdta

}
void g();
int main(){
    int num1 , num2 ;
    cout<<"Enter the value of first number "<<endl;
    cin>>num1;
    cout<<"enter the value of second number "<<endl;
    cin>>num2; // num1 and num2 are actual parameters
    cout<<"the sum is "<<sum(num1,num2); // remember that number of arguments are matching function definition
     
    g();
    return 0;
     
     //Formal parameters a and b will be taking values from actual parameters a and b
     
     //if you write the function sum after main there will be an error
    //  but sometimes we need to write the function after main. Here comes in function prototypes
//function prototypes --->

}
void g(){
    cout<<"\nhello there";
}