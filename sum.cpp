//asks user for two numbers and adds them by use of a function
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int s = a + b;
    return s;
}

int main ()
{
    int x, y;

    cout<<"x: ";
    cin>>x;

    cout<<"y: ";
    cin>>y;

    cout<<"Sum: "<<addition(x,y)<<endl;

    return 0;
}


