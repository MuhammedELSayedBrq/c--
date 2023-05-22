#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    string word;
    string arr[10];
    cin>>t;
    if (t>=1 && t<=10){
        for (int i=0;i<t;i++){
            cin>>arr[i];
        }
    }

   for(int l=0;l<t;l++){
        word=arr[l];
        int si=word.size();
            for (int j=0;j<si;j+=2){
                cout<<word[j];
            }
            cout<<" ";
            for (int k=1;k<si;k+=2){
                cout<<word[k];
            }
            cout<<endl;
    }
    return 0;
}
