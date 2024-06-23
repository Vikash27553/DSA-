#include<iostream>
#include<vector>
using namespace std;



void swap( int *ptr1, int *ptr2  ){
    int temp= *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}
void add_mult( int x, int y, int *aptr, int *mptr){
    *aptr= x+y;
    *mptr= x*y;
}

void fun( int *ptr, int n){
    for(int i=0; i<n; i++){
        cout<<ptr[i];  // or may be *(ptr+i)
    }
}

int main()
{
    //vextor are used to store address of a data type,vector is better than refernce in c++ ,or spaecial in array or vector

    int arr[]={2,3,4,5,};
    int *ptrarr=arr;   // assigning array to pointer

    int *ptr;           //declaration of pointer
    int*ptr1;    
    double ptr2;
    char ptr3;  
    string ptr4;      // another form of declare pointer


    cout<<(sizeof(ptr) )<<endl;         // give size of int 4 
    
    cout<<(sizeof(ptr2) )<<endl;           // give size of double 8
    
    cout<<(sizeof(ptr3) )<<endl;       // give size char size one 
    
    cout<<(sizeof(arr) )<<endl;         // arr will give total size occupied by array it will produce 16 
    cout<<(sizeof(ptr4) )<<endl;         // arr will give total size occupied by array it will produce 24

    cout<<*(ptrarr+2)<<endl;                 //alway array return first element address of array gives 2 index element
    

    int x=10,y =35 ,a , m;
    ptr = &x;
    cout<<*ptr<<endl;   //ptr give address of data and *ptr give the value of data
    

    // application of array: changing passed  paramter
    /* dynamiic memory allocation ,
      used to implement linked list, tree, graph ,bst
      to return multiple values
    
    */

    swap( &x, &y);

    cout<<"value  after swap"<<x<< " "<<y <<endl;
    add_mult( x, y, &a, &m);

    cout<<"addition: "<< a<<endl;
    cout<<"Multiplcation: "<<m<<endl;


    // used for accessing Array elemnt
     fun(arr , 4); 
     cout<<endl; 


     //key point 

     int arr1[]= {10,30,40};
     int *p1= arr1;
    //  ++*p1;                //case 1 operator precedence right to left 

     
    
    //  cout<<(++*p1)<<endl;
    //  cout<<arr1[0]<<" "<<arr1[1]<<endl;
    //  cout<<*p1;

     //case 2
     *p1++;
     cout<<(*p1++)<<endl;
     cout<<arr1[0]<<" "<<arr1[1]<<endl;
     cout<<*p1;







}