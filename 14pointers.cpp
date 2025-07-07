#include <iostream>
using namespace std;
int main(){
    //  pointers are data types which holds the address of other data types
    int a = 12  ;
    int* b =&a; // declaring pointer (data type ke baad * lgane se)
    // & ---> (address of) operator
    cout<<"the address of a is " <<b<<endl; // isko run krne pe a ka adrress milega memory me jisme ye program run hora
    cout<<"the address of a is " <<&a<<endl;
    // * ---> (value at ) dereference operator
    cout<<"the value at address b is " <<*b<<endl;

    //pointer to pointer -->

    int**c = &b;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value address value_at(value_at(c)) is "<<**c<<endl;
    
}