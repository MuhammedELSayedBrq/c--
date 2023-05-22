#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct student{
string name;
int id;
};
void print_struct(student s){
    cout<< s.name << "\t" << s.id <<endl;
}

int maxx(int xxc[],int len){
    int cv=xxc[0];
    for(int yy=0;yy<len;yy++){
        if(xxc[yy]>cv){
            cv==xxc[yy];
        }
    }
    return cv;
}
int binarySearch(const int list[],int length,int searchItem){
    int first=0;
    int last=length - 1;
    int mid;
    bool found=false;
    cout<<"\n"<<typeid(list).name()<<endl;
    while(first<=last && !found){
            mid = (first+last) /2;
        if(list[mid]==searchItem)
            found=true;
        else if (list[mid]>searchItem)
            last-=1;
        else first+=1;
    }
    if(found)
        return mid;
    else
        return -1;
}

int main(){
    /*
    string a="sda dkfm fkdm edf";
    string e="b";
    //String Add Works
    string f=a+e;
    cout<<f<<endl;
    cin.ignore(); //skip unwanted input
    cin>>sico;
    cout<<"\b backspace \f form feed \n new line \r return \t tap \\ \' \" \? \0 null char \n";
    double x=90.23;
    */
    /* Some Functions
    abs(x);
    acos(x);
    cbrt(x);    //cubic root
    ceil(x);    //round up
    cosh(x);
    exp(x);
    floor(x);
    fdim(x,y);
    */
    /*
    int s=3;
    float t=34.34;
    //bool x=true;
    char c='c';
    const int o=10;
    int xxx[5]={1,2,3,4,5};
    cout << endl <<"Max Of Array XXX Is : " << maxx(xxx,5) <<endl;
    for(int yy=0;yy<5;yy++){
        cout << xxx[yy]<<endl;
    }
    for (int zz=0;zz<3;zz++){
        cout<<a[zz]<<endl;
    }
    double r=3.034;
    cout << fixed << r<<endl;
    cout<<"Hello"<<endl;
    */
    /*
    double a = 20 * 2.5 ;
    a=a * 1 /100;
    cout<<a ;
    int ar[5]={1,2,3,4,5};
    cout<<"\nIndex Of item 5 is : "<<binarySearch(ar,5,5)<<endl;
    //// to get length of array->
    cout<< "\n\nsizeof(ar)= " <<sizeof(ar)/sizeof(*ar)<<endl;
    //// how to know data type
    cout<<typeid(ar).name();*/
    int arr[2][2]={1,2,3,2};
    cout<<arr[0][2]<<endl;
    int f=3.4;
    int ci = (int) f;  //(int) to convert to int
    int xie = (int) (f + 5);
    cout<<ci<<endl<<xie<<endl;
    student s1;
    s1.id = 1999;
    s1.name = "mohamed";
    print_struct(s1);
    int &y = ci;  //refernce to var ci if y changed then ci changed

    return 0;

}
