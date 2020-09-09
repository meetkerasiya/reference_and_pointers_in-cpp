#include <iostream>
using namespace std;
int main()
{
    string food;
    string *p;
    p=&food;
    food="mango";
    cout<<food<<endl;
    cout<<p<<endl;
    cout<<&food<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    return 0;
}