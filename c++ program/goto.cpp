#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"enter a number :";
    cin>>n;
    if(n%2==0){
        goto label1;
        
    }
    else{
        goto label2;
    }
    label1:
    cout<<"even";

    label2: 
    cout<<"odd";
}