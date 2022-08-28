#include<iostream>
using namespace std;

class Student{
  private:
  	int a;
  	int b;
  public:
     
	 Student(){
	 	cout << "constructor " << endl;
	 } 
	 ~Student(){
	 	cout << "Destructor ";
	 	
	 }
};
main(){
	Student obj;
}
