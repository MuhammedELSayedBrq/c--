#include <bits/stdc++.h>

using namespace std;

int fact=1;
int factorial(int n) {
    if( n > 1 ){
        fact *= n;
        factorial( n - 1 );
        }
    return fact;
}

int main()
{
    int n;
    cin >>n;

    int result = factorial(n);

    cout << result << "\n";
}
