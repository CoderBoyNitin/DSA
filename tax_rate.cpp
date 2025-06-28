#include <iostream>

using namespace std;

int main(){
    double sales = 95000;
    cout << "Sales : $" << sales << endl;

    const  double statetaxRate = 0.04;
    double statetax = statetaxRate * sales;
    cout << "Statetax : $" << statetax << endl;

    const  double countytaxRate = 0.02;
    double countytax = countytaxRate * sales;
    cout << "Countytax : $" << countytax << endl;

    double totaltax = countytax + statetax;
    cout << "totaltax : $" << totaltax << endl;

    return 0;
}