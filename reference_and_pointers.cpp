#include <iostream>
using namespace std;
int fun(int &a)
{
    a++;
    cout<<a<<endl;
    return a;
}
int main()
{
    int x=5;
    int* p;
    p=&x;
    int &r=x;
    cout<<x<<" "<<p<<" "<<r<<endl;
    x++;
    *p=15;
    r++;
    cout<<x<<" "<<p<<" "<<r<<endl;
    fun(x);
    cout<<x<<" "<<p<<" "<<r<<endl;
    r=25;
        cout<<x<<" "<<p<<" "<<r<<endl;

    
    return 0;
}
