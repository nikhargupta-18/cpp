#include <iostream>
using namespace std;
int counter = 10;
int main(){
    int counter = 50;
    cout<< "Local counter = "<<counter<<endl;
    cout<< "global counter = "<<::counter;
     return 0;
}