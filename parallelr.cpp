#include <iostream>
using namespace std;

int main ()
{
    float r1, r2, rp;
    cout<<"r1: "<<endl;
    cin>>r1;
    cout<<"r2: "<<endl;
    cin>>r2;

    rp = (r1 * r2)/(r1+r2);
    cout<<"Req: "<<rp<<endl;

    return 0;
}
