#include <iostream>
using namespace std;
int main()
{
    float total=100;
    float &s=total;;
    cout<<s<<endl;
    cout<<total;

}