#include <iostream>
using namespace std;
    float moneyrecieved(int currentmoney, float factor=1.04 ){
    return currentmoney*factor;} // default argument must stay in the extreme right of the function

int main(){
    int money = 10000;
    cout<<"if you have "<<money<<" in your bank then you will recieve "<<moneyrecieved(money)<<" at the end of the year"<<endl;
     //only one input is given to funcn moneyrecieved still it gave an output using default argument
     cout<<"for vip if you have "<<money<<" in your bank then you will recieve "<<moneyrecieved(money , 1.1)<<" at the end of the year"<<endl;
     return 0;

}