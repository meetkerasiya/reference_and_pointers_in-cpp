#include<string.h>
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
int n=5;
int &i_ref=n;
int &i_ref1=n;
int *i_ptr=&n;
int m=++i_ref;
++m;
cout<<i_ref<<' '<<m<<endl;
*i_ptr=15555;
m=i_ref1;
cout<<i_ref<<' '<<m<<endl;
return 0;
}
