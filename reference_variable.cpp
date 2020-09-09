#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int* ptr;
    ptr=&x;
    int &ref=x;
    cout<<x<<" "<<ptr<<" "<<ref<<endl;
    ptr++;
    ref++;
    cout<<x<<" "<<ptr<<" "<<ref<<endl;
    return 0;
}