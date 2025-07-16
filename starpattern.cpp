#include <iostream>
using namespace std;

int main(){
    int i , x;
    cout<<"type in the number"<<endl;
    cin>>x; 
    for (int p = 1 ; p<=x ; p++)
    {
    for (int i = 1; i<=p ; i++)
    {
        cout<<"*";
    }
  cout<<endl;
}
     return 0;
}