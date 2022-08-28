#include<iostream>
using namespace std;

class HighSchool{
  private:
  	int id, roll_no, age, standard;
  	string name, contact, address, institute;
  	static int cnt;
  	
  public:
  	HighSchool(){
  		cnt++;
	}
	
	void setStudent(){
		cout << endl << "Enter HighSchool Student Info: " << endl;
		cout << "Enter Student ID: ";
		cin >> id;
		cout << "Enter Student Name: ";
		cin >> name;
		cout << "Enter Student Age: ";
		cin >> age;
		cout << "Enter Student Roll no: ";
		cin >> roll_no;
		cout << "Enter Student Standard: ";
		cin >> standard;
		cout << "Enter Student Contact: ";
		cin >> contact;
		cout << "Enter Student Address: ";
		cin >> address;
		cout << "Enter Student Institute: ";
		cin >> institute;
	}
	
	void getStudent(){
		cout << endl << "HighSchool Student Info: " << endl;
		cout << "Student ID: " << id << endl << "Student Name: " << name << endl << "Student Age: " << age << endl 
		<< "Student Roll number: " << roll_no << endl << "Student Standard: " << standard << endl << "Student Contact: " 
		<< contact << endl << "Student Address: " << address << endl << "Student Institute: " << institute << endl;
	}
	
	static getCount(){
		cout << cnt << endl;
	}
};

class College{
  private:
  	int id, roll_no, age, standard;
  	string name, contact, address, institute;
  	static int cnt;
  	
  public:
  	College(){
  		cnt++;
	}
	
	void setStudent(){
		cout << endl << "Enter College Student Info: " << endl;
		cout << "Enter Student ID: ";
		cin >> id;
		cout << "Enter Student Name: ";
		cin >> name;
		cout << "Enter Student Age: ";
		cin >> age;
		cout << "Enter Student Roll no: ";
		cin >> roll_no;
		cout << "Enter Student Standard: ";
		cin >> standard;
		cout << "Enter Student Contact: ";
		cin >> contact;
		cout << "Enter Student Address: ";
		cin >> address;
		cout << "Enter Student Institute: ";
		cin >> institute;
	}
	
	void getStudent(){
		cout << endl << "College Student Info: " << endl;
		cout << "Student ID: " << id << endl << "Student Name: " << name << endl << "Student Age: " << age << endl 
		<< "Student Roll number: " << roll_no << endl << "Student Standard: " << standard << endl << "Student Contact: " 
		<< contact << endl << "Student Address: " << address << endl << "Student Institute: " << institute << endl;
	}
	
	static getCount(){
		cout << cnt << endl;
	}	
};

int HighSchool::cnt = 0;
int College::cnt = 0;

int main(){
	HighSchool hs[2];
	College clg[2];
	
	for(int i = 0; i < 2; i++) hs[i].setStudent();
	cout << endl;
	for(int i = 0; i < 2; i++) clg[i].setStudent();
	cout << endl;
	for(int i = 0; i < 2; i++) hs[i].getStudent();
	cout << endl << "Total High School Students: ";
	HighSchool::getCount();
	cout << endl;
	for(int i = 0; i < 2; i++) clg[i].getStudent();
	cout << endl << "Total College Students: ";
	College::getCount();
}
