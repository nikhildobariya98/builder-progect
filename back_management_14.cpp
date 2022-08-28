#include<iostream>
#include<iomanip>
#include<stdlib.h>
typedef long long ll;
using namespace std;


class Staff{
  private:
  	ll account, balance = 50000;
	string name, mobile, email, password;
	static int cnt;
	
  public: 	
	void setStaffDetails(){
		cout<<"\t\t\t--------------------------------------------------------------"<<endl;
		cout<<"\t\t\t                     -:Welcome As a Staff:-                   "<<endl;
		cout<<"\t\t\t--------------------------------------------------------------"<<endl << endl;
		cout<<"\t\t\t\t  Enter the Name of Staff             :";
		cin >> name;
		cout<<"\t\t\t\t  Enter the Account Number of Staff   :";
		cin >> account;	
		cout<<"\t\t\t\t  Enter the Mobile Number of Staff    :";
		cin >> mobile;
		cout<<"\t\t\t\t  Enter the Email of Staff            :";
		cin >> email;
		cout<<"\t\t\t\t  Enter the Password of Staff         :";
		cin >> password;
		cnt++;
		system("CLS");
	}
	void getStaffDetails(){
		cout << endl << endl;
		cout<<"\t\t\t--------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\tName          :" << name << endl;
		cout<<"\t\t\t\tAccount No    :" << account << endl;
		cout<<"\t\t\t\tPhone No      :" << mobile << endl;
		cout<<"\t\t\t\tEmail         :" << email << endl;
		cout<<"\t\t\t--------------------------------------------------------------"<<endl;
	}
	
	Staff login(Staff staff[], ll account, string password){
		//Staff user;
		for(int i = 0; i < cnt; i++){
			if(staff[i].account == account && staff[i].password == password){
				staff[i].getStaffDetails();
				return staff[i];
			}
		}
	}
	
	bool searchAccount(Staff staff[], ll account){
		for(int i = 0; i < cnt; i++){
			if(staff[i].account == account) return true;
		}
		return false;
	}
	
	void updateBalance(Staff staff[], ll amount){
		for(int i = 0; i < cnt; i++){
			if(staff[i].account == account) staff[i].balance += amount;
		}
	}
	
	void transferMoney(Staff staff[], ll account, ll amount){
		Staff forAccountCheck;
		if(forAccountCheck.searchAccount(staff, account) && balance > amount){
			balance -= amount;
			updateBalance(staff, amount);
			cout << "Successfully transfered!!!";
		}
		else {
			cout << "Money is not sufficient or Account does not exist!!!";
		}
	}
	
	void withdrawMoney(ll amount){
		system("CLS");
		cout<<"\t\t\t--------------------------------------------------------------"<<endl;
		cout<<"\t\t\t Withdraw the money :"<< amount << endl;
		cout<<"\t\t\t--------------------------------------------------------------"<<endl << endl;
		cout<<"\t\t\t Your Actual Amout Is: " << balance << endl << endl; 
		if(balance > amount){
			balance -= amount;
			cout << "\t\t\tCongrates Your Money Has Withdraw Successfully!!!" << endl << endl;
		}
		else
			cout << "Money is not sufficient!!!" << endl;
		cout<<"\t\t\t Your Account Balance Is: " << balance << endl;
	}
	
	void depositMoney(ll amount){
		balance += amount;
	}
	
	void checkBalance(){
		cout << "Balance   :" << balance << endl;
	}
};

void welcomeScreen(){
	cout << endl << endl << endl;
	cout<<"\t\t\t\t\t  -: BANK MANAGMENT SYSTEM :-"<<endl;
	cout<<"\t\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t  -:Designed n programed By:-"<<endl;
	cout<<"\t\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t  -:   NIKHIL K DOBARIYA   :-"<<endl<<endl;
	cout<<"\t\t\t\t\t  -:        Trainer        :-"<<endl;
	cout<<"\t\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t  -:      SIVAM JADAV      :-"<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t  ";
	system("pause");
}

void loginScreen(){
	cout << endl << endl << endl;
	cout<<"\t\t\t--------------------------------------------------------------"<<endl;
	cout<<"\t\t\t-:Press A to Log in as Administrator Or S to Log in as Staff:-"<<endl;
	cout<<"\t\t\t--------------------------------------------------------------"<<endl;
}

void options(){
	cout << endl << endl;
	cout<<"\t\t\t   Press [1] to Deposite the Money: "<< endl << endl;
	cout<<"\t\t\t   Press [2] to Transfer the Money: "<< endl << endl;
	cout<<"\t\t\t   Press [3] to Withdraw the Money: "<< endl << endl;
	cout<<"\t\t\t   Press [4] to Exit: "<< endl << endl;
}

int Staff::cnt = 0;


void userActivity(Staff staff[], Staff user){
	int ch;
	while(ch != 4){
		ll amount, account;
		options();
		cin >> ch;
		switch(ch){
			case 1: 
				cout << "Enter the Amount: ";
				cin >> amount;
				user.depositMoney(amount);
				break;
			case 2:
				cout << "Enter the Receiver's Account Number: ";
				cin >> account;
				cout << "Enter the amount: ";
				cin >> amount;
				user.transferMoney(staff, account, amount);
				break;
			case 3:
				system("CLS");
				cout << "Enter the Amount: ";
				cin >> amount;
				user.withdrawMoney(amount);
				break;
			case 4:
				cout << "Closing program...";
			default:
				cout << "Wrong choice!!!";
		}
	}	
}


void staffActivity(){
	Staff staff[10];
	int ch;
	while(ch != 3){
		system("CLS");	
		cout << "1. Insert Records: " << endl << "2. Login" << endl << "3. Exit" << endl;
		cout << "Enter Choice: ";
		cin >> ch;
		switch(ch){
			case 1: 
				for(int i = 0; i < 3; i++){
					staff[i].setStaffDetails();
				}
				break;
			case 2:
				{
				ll account;
				string password;
				cout << "Enter Account No: ";
				cin >> account;
				cout << "Enter Password: ";
				cin >> password;
				Staff forLogin, user;
				user = forLogin.login(staff, account, password);
				userActivity(staff, user);
				break;
			}
			default: 
				cout << "Wrong choice";
		}
	}	
}


int main(){	
	char ch;
	welcomeScreen();
	system("CLS");
	loginScreen();
	cin >> ch;
	system("CLS");
	
	while(ch != 'A' || ch != 'S'){
		switch(ch){
			case 'A':
				cout << "Admin Side" << endl;
				break;
			case 'S':
				{
				staffActivity();
				break;
			}
			default:
				cout << "Invalid Choice" << endl;
		}
	}
	
	

}

