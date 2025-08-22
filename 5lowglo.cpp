#include <iostream>

using namespace std;
int glo = 6;  // declaring a gobal variable glo
void sum(){    //"void just basically gives instructions that can be used whenever we call its function"
int a;
//3 cout<<glo;  

}
int main(){
    //1 int glo=11;
    //2 glo=78;
    sum(); // calls function that uses global glo(bcoz no local glow is declared in this)
    // ye basically keh rha h information jo void me thi vo taiyyar krlo ab kaam aane wali h
    bool boolean = true;
    cout<<glo<< boolean;

}
// if we run this function the global function will get printed (6)
// removing comment 1, local function will take precedence then print 11
/* removing comment 2, the value of glo gets updated to 78 code will print 78 
also notice that the glo that gets updated is also the local one not the global one*/
