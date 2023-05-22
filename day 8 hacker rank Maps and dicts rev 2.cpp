#include<iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string name, number, key;
    unordered_map<string, string> phone_dir;
    for(int i=0; i<n; i++)
    {
        cin>>name>>number;
        phone_dir.emplace(pair <string, string> (name, number));
    }
    while(cin>>key)
    {
        if (phone_dir.find(key) != phone_dir.end())
        {
             cout<<key<<"="<<phone_dir.find(key)->second<< endl;
        }
        else cout<< "Not found\n";
    }

    return 0;

}
