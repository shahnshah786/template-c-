
#include <iostream>
using namespace std;

template<class S>S add(S a, S b)
{
    S result=a+b;
    return result;
}
int main()
{
    int a=2;
    int b=3;
    int c=4;
    int d=6;
    cout<<add(a , b);
    cout<<add(c,a);
    cout<<add(c,d);
}
