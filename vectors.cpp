#include <iostream>
using namespace std;
#include <vector>
void display(vector<int>&v){ // creating a void thats displays the vector
    for (int i = 0; i < v.size(); i++)
    {
    cout<<v[i]<< " ";
    }
    
    
}

int main(){
vector<int> vec1;
int element , size;
cout<<"Enter the size of vector"<<endl;
cin>>size;
cout<<endl;
for (int i =0 ; i<size; i++){
    cout<<"Enter an element to add to this vector ";
    cin>>element;
    vec1.push_back(element);    
}
display(vec1);

//inserting elements in a vector by using iterator

vector<int> :: iterator iter = vec1.begin();
vec1.insert(iter,32);
display(vec1);


return 0;
}
