//volume of a sphere

# include <iostream>
using namespace std;

#define PI 3.141959

int main ()
{
    double radius = 2.5;
    double volume;

    volume = 1.3333 * PI * radius * radius * radius;
    cout<<"The volume =";
    cout<<volume;
    return 0;
}
