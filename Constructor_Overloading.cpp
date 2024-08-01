//Constructor Overloading

#include<iostream>
using namespace std;
class CSIT
{
    int a,b,c;
    public:
    CSIT(int a)
    {
        cout<<"Sum = "<<a+10<<endl;
    }
    CSIT(int a, int b){
        cout<<"Sum = "<<a+b<<endl;
    }
    CSIT(int a, int b, int c){
        cout<<"Sum = "<<a+b+c<<endl;
    }
};
int main(){
    CSIT c1(5);
    CSIT c2(20,30);
    CSIT c3(40,50,60);
    return 0;
}
