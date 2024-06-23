#include<iostream>
#include<vector>
using namespace std;



void swap(int &x, int &y){
        int temp= x;
        x=y;
        y=temp;
    }

void print(  vector<int> &v){
    for(auto x: v){
        cout<<x<<" ";
    }
}    


int main(){

    //used for pass refernce of a variable instead creating new copy of variable
    // used for modify passed parameter,
    // used for alias, can't be null must be intialise,safer,cannot refer to another location  


    // swap

    
    int x = 15, y= 20;
    
    swap(x, y); 

    
    cout<<x<<" "<<y;

    // avoiding large amount data copy 

    vector<int> v;
    for(int i=0; i<100; i++){
        v.push_back(i);
    }
    print(v);


    //modification in for each loop

    vector<int> vect{ 10,30,40,50,60};

    for(auto  &x: vect){
        x = x+5;
    }
    for(auto x : vect){
        cout<<x<<" ";
    }


    return 0;


}