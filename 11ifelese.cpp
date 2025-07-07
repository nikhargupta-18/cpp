#include <iostream>
using namespace std;

int main(){
    //selection ctrl str :if - else if - else ladder
     int age;
    cout<<"tell me your age "<<endl;
    cin>>age;
//     if ((age<18)&&(age>0)){
//         cout<<"you are not eligible"<<endl;
//     }
//     else if(age == 18){
//     cout<<"you are a kid lol"<<endl;
//     }
//     else if (age<1)
// {
//         cout<<"you are non existent";
//     }
//     else {
//         cout<<"you are eligible";

//     }//(if first is true then it will not check other two)

//selection ctrl strctre : switch case statements

switch (age)
{
    case 18 :
    cout<<"you are 18"<<endl;

    break;

    case 22 :
    cout<<"you are 22"<<endl;
   
break;
    case 2 :
    cout<<"you are 2"<<endl;

    break;

    default : 
    cout<<"no special cases"<<endl;
    //agr break nhi to to saare cases print ho jaate
    //break basically ek bhi case true hote hi sidhe } iske bahr se cont krta h program
}
cout<<"done with switch case";

return 0;
    }

