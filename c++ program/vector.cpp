#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v{10,20,30,40};// declaration of vector elements or initialise  value
    v.push_back(2);   //push_back function used to insert element in vector
    v.push_back(3);
    
    // simailar
    vector<char> p{'c','p','g'};
    for(auto x: p )
    cout<<x<<" ";



     for(auto x:v){
        cout<<x<<" ";

     }
    



}