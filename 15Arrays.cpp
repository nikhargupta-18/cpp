#include <iostream>
using namespace std;
int main(){
    int marks[4]= {1 , 12 , 13, 20}; // basic syntax of arrays
    cout<<marks[0]<<endl; // in cpp counting starts from 0
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    //value change bhi kr skte hai beech program me 
    marks[2]= 44; // changing the value of array '2'
    cout<<marks[2]<<endl;



    // another way of declaring array--->
    int score[2];
    cout<<"these are mathematics test scores"<<endl;
    score[0]=18;
    score[1]=13;
    score[2]=17; 
    cout<< score[0]<<endl<<score[1]<<endl<<score[2]<<endl;

    //using loop to print arrays 

    int physcore[]={12 , 14 , 15 , 19}; // [size] me kuch nhi dala but cpp compiler apne aap 4 leleta hai 4 entries dekh ke 
    for (int i = 0; i < 4; i++)
    {
        cout<<"the physics score of " <<i<<" is "<<physcore[i]<<endl;
    } // now we can easily solve the '2500 student' problem.

    //pointers and arrays
    int *p = physcore;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;

    cout<<"the value of physcore [0] is "<<*p<<endl;
    cout<<"the value of physcore [1] is "<<*(p+1)<<endl;
    cout<<"the value of physcore [2] is "<<*(p+2)<<endl;
    
    
     return 0;
}