//prints out the first 20 numbers and the sum of those numbers
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, i;
    for (i=1; i<=20; i++)
    {
        cout<<i<<endl;
        sum = sum + i;
    }
    cout<<"Sum: "<<sum;

    return 0;
}
