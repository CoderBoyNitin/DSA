#include <iostream>

using namespace std;

int main(){
    int x = 3;
    int y = 4;
    int temp = x;
    x = y;
    y = temp;
    cout << x;
}