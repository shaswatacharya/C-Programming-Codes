//Copy Constructor

#include<iostream>
using namespace std;
class parent
{
    int a,b;
    public:
    parent(int x, int y)
    {
        a = x;
        b = y;
    }
    parent(parent & p1){
        a = p1 . a;
        b= p1 . b;
    }
    void display(){
        cout<<"Sum = "<<a+b;
    }
};
int main()
{
    parent p1(20,30);
    parent p2(p1);
    p2.display();
    return 0;
}
