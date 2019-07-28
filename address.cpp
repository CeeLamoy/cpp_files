#include <iostream>
using namespace std;

int main ()
{
    int p = 7;
    int &q = p;
    cout<<"\n p="<<p<<",q="<<q;
    p = p + 1;
    cout<<"\n p ="<<p<<", q="<<q;
    q-=5;
    cout<<"\n p = "<<p<<", q= "<<q;

    return 0;
}
