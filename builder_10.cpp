#include<iostream>
using namespace std;

class Students{
  public:
  	
    int id, stu_name,age;
    string college_name,course, city, email;
    
  public:
    void setstu(){
    	cout << "Enter students ID: ";
    	cin >> id;
    	cout << "Enter students name: ";
    	cin >> stu_name;
    	cout << "Enter students age: ";
    	cin >> age;
    	cout << "Enter students  email: ";
    	cin >> email;
    	cout << "Enter students course: ";
    	cin >> course;
    	cout << "Enter students  city: ";
    	cin >> city;
    	cout << "Enter students  college name: ";
    	cin >> college_name;
    }
    
    void getstu(){
   	cout << "students  ID: " << id << endl << "students  name: " << stu_name << endl <<" studente age " << age <<
		endl << "student course"<< course << endl << "students  email: " << email << endl << "students  city: " << city <<
	 	  "students  college_name: " << college_name << endl;
    }
};

int main(){

    Students stu[5];

    for(int i = 0; i < 5; i++){
    	cout << "Enter students  detail " << i+1 << ": " << endl;
    	stu[i].setstu();
    	cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
    	cout << "students  detail " << i+1 << ": " << endl;
    	stu[i].getstu();
    	cout << endl;
    }
     
}
