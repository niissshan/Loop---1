/*3,12,48,.. upto ‘n’ terms.*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"************************************"<<endl;
    int a = 3; 
    for(int i=1; i<=n; i++)
    { 
        cout<<a<<endl;
        a = a*4;
    }
    return 0;
}