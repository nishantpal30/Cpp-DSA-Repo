#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;
    for(int i=0;i<=number;i++){
        if(i%2==0)
        cout<<i<<endl;
    }
return 0;
}