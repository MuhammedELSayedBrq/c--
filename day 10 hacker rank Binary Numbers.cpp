#include <bits/stdc++.h>
#include <bitset>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    bitset<sizeof(int) * CHAR_BIT>    bits(n);
    string sx = bits.to_string();
    int con=0;
    int coo=1;

    for (int i=32;i>0;i--){
        if (sx[i]==sx[i-1] && sx[i]=='1'){
        coo++;
            if (coo>con)
                con=coo;
        }
        else{
            coo=0;
        }
    }
    con++;
    cout<<con;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
