#include <iostream>
using namespace std;

int main()
{
    int marks[5],i, sum = 0;

    for (i=0; i<5; i++)
    {
        cout<<"Enter the value of marks["<<i<<"]\n";
        cin>>marks[i];

        sum += marks[i];
    }
    cout<<"\nSum = "<<sum<<endl;
    return 0;
}
