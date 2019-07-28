//area of a sphere

# include <iostream>
using namespace std;

#define PI 3.141959

int main ()
{
    double radius = 2.5;
    double area;

    area = 4 * PI * radius * radius;
    cout<<"The area of the sphere =";
    cout<<area;
    return 0;
}

