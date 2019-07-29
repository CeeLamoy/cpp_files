//asks student for marks in 5 subjects, finds the sum and the average percentage
#include <iostream>
using namespace std;

int main ()
{
    int i, marks[5], sum=0;
    float perc;

    for (int i=0; i<5; i++)
    {
        cout<<"Mark: ";
        cin>>marks[i];
        sum = sum + marks[i];
    }
    perc = (sum/5);
    cout<<"Sum: "<<sum<<endl;
    cout<<"Percentage: "<<perc<<endl;
}
