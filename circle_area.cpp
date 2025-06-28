#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int radius;
    cout << "enter the radius :";
    cin >> radius;

    // const double pi = 3.14;
    double area = 3.14 * pow(radius, 2);
    cout << "the area of circle is : " << area;
    return 0;
}