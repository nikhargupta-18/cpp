#include <iostream>
using namespace std;

inline int product(int a , int b){
    static int c =0;
c=c+1;
    return a*b+c;
    
}
int main(){
    int a , b ,c;
     cout<<"type in the numbers"<<endl;
     cin>>a>>b;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
// inline function saves the function where it is executed so then when the function is repeated 
//is repeated then program doesnt have to go upward again and again making it slow

cout<<c<<endl;
cout<<c<<endl;
     return 0;
}

// dont use inline when recursion and static funcn are used