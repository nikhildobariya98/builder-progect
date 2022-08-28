#include<iostream>
using namespace std;

class Employee{
  public:
  	int id, address, exp;
	  string name, role, salary, city,email,contact;
	  
  public:
	void setEmp(){
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Address: ";
		cin >> address;
		cout << "Enter email : ";
		cin >> email;
		cout << "Enter Role: ";
		cin >> role;
		cout << "Enter Salary: ";
		cin >> salary;
		cout << "Enter Experince: ";
		cin >> exp;
		cout << "Enter contact num: ";
		cin >> contact ;
		cout << "Enter City: ";
		cin >> city;
	} 
	
	void getEmp(){
		cout << id << " " << name << " " << address << " " << email << " "<< contact  << " " << role << " "
		<< salary << " " << exp << " " << city ;
	}
};

int main(){
	Employee emp[5];
	
	for(int i = 0; i < 5; i++){
		cout << "Enter the detail of employee " << i+1 << endl;
		emp[i].setEmp();
	}
	
	cout << endl;
	for(int i = 0; i < 5; i++){
		cout << "Detail of employee " << i+1 << endl;
		emp[i].getEmp();
		cout << endl;
	}
	
}
