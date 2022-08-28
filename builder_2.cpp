#include <iostream>
using namespace std;

// Base class
class Student {
private:
    char name[30];
    int age;
    char roll[10];

public:
    void getInfo(void);
    void putInfo(void);
};

// function definitions
void Student::getInfo(void)
{
    cout << "Enter student information:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "roll_num: ";
    cin >> roll;
}

void Student::putInfo(void)
{
    cout << "Name: " << name <<endl<< "Age: " << age <<endl<< "roll no:" << roll <<endl;
}

// Derived class
class std_result_info : public Student {
private:
    int totalM;
    float percentage;
    int english;
    int guj;
    int sci;

public:
    void getResultInfo(void);
    void putResultInfo(void);
    void calResult(void);
};

// Function definitions
void std_result_info::getResultInfo(void)
{
	getInfo();
	cout << endl;
    cout << "Enter student's result information:" << endl;
    cout << "Enter English marks: ";
    cin >> english;
    cout << "Enter Gujarati marks: ";
    cin >> guj;
    cout << "Enter Science marks: ";
    cin >> sci;
}

void std_result_info::putResultInfo(void)
{
	putInfo();
	cout << "English Marks: " << english << endl << "Gujarati Marks: " << guj << endl << "Science Marks: " << sci << endl;
    calResult();
}

void std_result_info::calResult(void){
	totalM = english + guj + sci;
	percentage = (totalM*100)/300;
	cout << "Total Marks: " << totalM << endl << "Percentage: " << percentage << endl;
}

int main()
{
    // Create object of derived class
    std_result_info std;

    // Read student basic and result information

    std.getResultInfo();

    //print student basic and result information

    std.putResultInfo();

}

