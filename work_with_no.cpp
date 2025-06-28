// #include<iostream>

// using namespace std;

// int main(){
//     int number = 255 or // in binary = 0b11111111 or in hexadecimal = 0xff = 0xFF ;
//     cout << number;

//     return 0;
// }

// Generating random numbers.

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main(){
    srand(time(0));
    int number = rand();
    cout << number; 
}