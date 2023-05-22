#include<iostream>

using namespace std;

class stackk{
public:
    int sp=-1;
    string arr[5];
    void push(string n){
        if (sp==4){
            cout<<"stack is full\n";
        }
        else{
            sp++;
            arr[sp]=n;
        }
    }
    void pop(){
        if(sp==-1){
            cout<<"stack is empty\n";}
        else{
            cout<<"pop \""<<arr[sp]<<"\""<<endl;
            sp--;
        }
    }
    void show(){
        if(sp==-1){
            cout<<"stack is empty\n";
        }
        else{
            for(int i=0;i<=sp;i++){
                cout<<"item "<<i<<" = "<<arr[i]<<endl;
            }
        }
    }
};

int main(){
    stackk ss;
    ss.push("mo");
    ss.pop();
    ss.push("as");
    ss.push("sa");
    ss.push("saf");
    ss.push("sadf");
    ss.push("asfrg");
    ss.show();

return 0;
}
