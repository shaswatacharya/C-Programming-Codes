#include<iostream>
using namespace std;
class calc
{
	int a,b;
	public:
		void getdata(){
			cout<<"Enter Two Numbers"<<endl;
			cin>>a>>b;
		}
		calc operator *(calc c1){
			calc c3;
			c3.a = a * c1.a;
			c3.b = b * c1.b;
			return c3;
		}
		void display(){
			cout<<"Sum = "<<a*b<<endl;
		}
};
int main(){
	calc c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3 = c1 * c2;
	c3.display();
	return 0;
}
