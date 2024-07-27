/* 4,7,10,13,16*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"************************************"<<endl;
    
    for(int i=4; i<=((3*n)+1); i+=3)
    { 
        cout<<i<<endl;
    }
    return 0;
}