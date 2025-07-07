#include <iostream>
using namespace std;
int main (){
    //there are 3 types of loops in cpp- while , for and do while loops
    
    //for loops in cpp --->

    // int i =1;
    // cout<<i;
    // i++;
    
    // syntax (for loop) -

    // for (initialization ; condition ; updation)
    // {
    //     loop body(cpp code);
    // }
    // condition ---> loop body run ---> updation //aise chlta h code
    /* for (int i = 0; i < 1000; i++)
    {
      // code
      cout<<i<<endl;
      

    }
    */

//  for (int i = 0; 34<=40; i++)
//     {
//       // code
//       cout<<i<<endl;
//       // this is infinite for loop cuz condition is always true
      

//     }
    
//SYNTAX FOR WHILE LOOP - 
// while(condition)
// {
//     c++ statements;
// }


// printing 1 to 99 using while loop


// int i =1;
// while(i<=99){
//     cout<<i<<endl;
//     i++;
// }

//example of infinite while loop--->

// int i = 1;
// while(true)
// {cout<<i<<endl;
//     i++;
// }


// do while loop syntax -

//do 
//{
//  c++ statements;
// }while (conditions)}
   
int i = 1;
do
{
 cout<<i<<endl;
 i++;
} while (i<10000);
//while (false)  // condition false hogi to bhi ek br loop chlega hi



    return 0;




}

