#include<iostream>

using namespace std;

int main(){
    int fahrenheit ;
    cout << "enter the value of fahrenheit :";
    cin >> fahrenheit;

    double celcius = (fahrenheit - 32) / 1.8;
    cout << "the converted temperature in celcius is :" << celcius;

}

// #include <iostream> 

// using namespace std;

// int main(){
//     cout << "fahrenheit :";
//     int fahrenheit;
//     cin >> fahrenheit;
//     double celcius = (fahrenheit - 32) / 1.8;
//     cout << celcius;
// }