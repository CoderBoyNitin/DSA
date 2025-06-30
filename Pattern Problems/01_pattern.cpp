#include<bits/stdc++.h>

using namespace std;
void printf1(int n){
    for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
void printf2(int n){
    for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
} 
void printf3(int n){

    for ( int i = 1; i <= n; i++)
           {
        for (int j = 1; j <=i; j++)
            {
            cout << j << " ";
            }
            cout << endl;
        }
    }
void printf4(int n){

    for ( int i = 1; i <= n; i++)
           {
        for (int j = 1; j <=i; j++)
            {
            cout << i << " ";
            }
            cout << endl;
        }
    }
void printf5(int n){

    for ( int i = 1; i <= n; i++)
           {
        for (int j = 1; j <= n - i + 1; j++)
            {
            cout << "*";
            }
            cout << endl;
        }
    }
void printf6(int n){

    for ( int i = 1; i <= n; i++)
           {
        for (int j = 1; j <= n - i + 1; j++)
            {
            cout << j << " ";
            }
            cout << endl;
        }
    }
void printf7(int n){

    for ( int i = 0; i < n; i++)
    {
        // space
        for ( int j = 0; j < n - i- 1; j++)
        {
            cout << " ";
        }
        // stars
        for ( int j = 0; j < 2 * i + 1; j++)
        {
           cout << "*";
        }
        // space
         for ( int j = 0; j < n - i- 1; j++)
        {
            cout << " ";
        }
        
        cout << endl;
    }
    
}
void printf8(int n){
    for ( int i = 0; i <= n; i++)
    {
        // space
        for ( int j = 0; j <=i; j++)
        {
            cout << " ";
        }
        // stars
        for ( int j = 0; j < 2*n -(2*i - 1); j++)
        {
           cout << "*";
        }
        // space
         for ( int j = 0; j <=i; j++)
        {
            cout << " ";
        }
        
        cout << endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        printf8(n);
    }
    
    return 0;
}