#include<iostream>

using namespace std;

class medo{
        public:
            int age;
            string name;
            void medoMethod(){
                cout<<"Kosom El Classat";
            }
            void tany();
        private:
            int s=age^2;
            string f="fuck " +name;

    };
void medo::tany(){
    cout<<"\nIm a focken hecker\n";
}
class son: public medo{
public:
    string sex;
    string gender(){
        cout<<"what gen(\"Male \" or \"Female\")";
        cin>>sex;
        if(sex=="Male" || sex=="Female"){
        cout<<"7apipy 7apeeeeepy";
    }
    else{
        cout<<"Keda Ghalat ya Male ya Female\n";
    }

        return sex;
        };

};

int main(){

    medo me;
    me.age=13;
    me.name="mo";
    cout<<me.name <<endl;
    son motany;
    motany.gender();
    cout<<motany.sex;
    cout << endl<<motany.age<<endl;
    me.medoMethod();
    medo me2;
    me.tany();
    me2.age=1;
    cout<<me2.name;

}
