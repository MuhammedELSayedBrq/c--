#include <iostream>
#include <iomanip>
#include <limits>
#include<string>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int ii;
    double dd;
    string ss;

    // Read and save an integer, double, and String to your variables.
    string tmp;
    getline(cin, tmp);
    ii = stoi(tmp);
    getline(cin, tmp);
    dd = stod(tmp);
    getline(cin, ss);
    // Print the sum of both integer variables on a new line.
    cout << i+ii <<endl;
    // Print the sum of the double variables on a new line.
    cout<< fixed << setprecision(1) <<d+dd <<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + ss << endl;
    return 0;
}
