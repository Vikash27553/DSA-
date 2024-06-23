#include<iostream>
#include<vector>
using namespace std;

int main(){
    // structure are used to store differnt data type value togehter 

    struct student
    {
        int roll;
        string name;
        string section;
    } ;
    student s1;             //object created

    s1.roll =45;
    s1.name= "vikash kaushik";
    s1.section= "a";

    cout<<s1.name;
    
}