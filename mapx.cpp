#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
map<string,int> split(const string &);


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string n_temp;
    getline(cin, n_temp);
    map<string,int> pN;
    int n = stoi(ltrim(rtrim(n_temp)));
    if (n>=1 && n<=100000){
        for(int i=0;i<n;i++){
        string map_temp_temp;
        getline(cin, map_temp_temp);
        map <string,int> pN_dump;
        pN_dump = split(rtrim(map_temp_temp));
        string keyy = pN_dump.begin()->first;
        int val = pN_dump.begin()->second;
        pN.insert(make_pair(keyy,val));
        }
    }
    string search_phone_num;
    getline(cin,search_phone_num);
    map <string , int>::iterator it;
    bool x=false;
    for (it=pN.begin(); it!=pN.end(); it++){
           if(search_phone_num==it->first){
            x=true;
            break;}
        }
    if(x){
        cout<<it->first<<"="<<it->second<<endl;
    }
    else{
        cout<<"Not found\n";
    }

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

map<string,int> split(const string &str) {
    map<string,int> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        string key=str.substr(start, end - start);
        int value=stoi(str.substr(end - start + 1, end));
        tokens.insert(make_pair(key,value));
        start = end+1;

    }


    return tokens;
}
