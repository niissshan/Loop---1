#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number for which you need table"<<endl;
    cin>>n;
    cout<<"************************************"<<endl;
    
    for(int i=n; i<=(n*10); i+=n)
    { 
        cout<<i<<endl;
    }
    return 0;
}