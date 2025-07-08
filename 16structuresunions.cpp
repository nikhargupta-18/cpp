 // jab data types same ho tab arrays se combine krte hai
    //jab alag datatypes ho tab structures

#include <iostream>
using namespace std;

struct employee
//typedef struct employee  // agar typedef likhde to bs iska mtlab ye h ki  ab struct employee pura likhne ki jagah 'ep' likh skte h aage
{
    int Eid;
    char favchar;
    float salary;
}ep;


union money{   // union tab use krte hai jab sirf ek data types use krna hota h defined walo me se
// ye better memmory allocation ke use aata hai
    int rice;
    char carkafirstletter;
    float rupees;
};
int main(){

    struct employee nikhar;
    
    //ep nikhar; // agr typedef use kre to aise likh skte h 15th line ki jagah
    nikhar.Eid = 1;
    nikhar.favchar = 'd';
    nikhar.salary = 100000000;

    cout<<"the value of nikhars salary is "<<nikhar.salary<<endl;
    cout<<"the fav character is "<<nikhar.favchar<<endl;
    cout<<"the Eid is "<<nikhar.Eid<<endl;


    union money m1;
    m1.rice = 32;
    //m1.carkafirstletter = 'g'; // agr do sath me rkhenge to unexpected output aaega
    cout<<m1.rice<<endl;


    //enumeration
enum meal {breakfast , lunch , dinner}; // meal ab ek datatype bhi dec;are ho chuka  hai
meal m2= lunch;
cout<<m2<<endl;
cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;

     return 0;
}