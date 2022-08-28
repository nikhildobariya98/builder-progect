#include<iostream>
using namespace std;

class Demo{
  public:
  	static int a;
  	static void getA(){
  		a += 1;
  		cout << a << endl;	
	}
};

int Demo::a = 5;

int main(){
	Demo a, b, c;
	Demo d();
	b.getA();
	c.getA();
}
