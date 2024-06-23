#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int arr[5]={ 10,20,30,80,70};
    int n= sizeof(arr)/sizeof(arr[0]);

    int rest = arr[0];

    for(int i=0; i<n; i++)
    {
        rest= max(rest , arr[i]);
    }
            cout<<"maximum number is:"<<" " <<rest<<endl;

    // direct method

    int reslt = *max_element(arr, arr+n);
    cout<<"THe second result is :"<<" "<<reslt<<endl;
    

    // now in vextor 
     vector<int>v { 10,40,60,79,99};
     cout<<"THis is 3rd optput:"<<*max_element(v.begin(), v.end() );

}