#include <iostream>
using namespace std;

int sum (int a , int b){
    cout<<"using function with 2 arg "<<endl;
    return a+b;
}
int sum ( int a ,int b, int c){
cout<<"using function with 3 arguments "<<endl;
return a+b+c;
}
int main(){
cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
cout<<"the sum of 3 , 8 and 19 is "<<sum (3 , 8 ,19)<<endl;
}