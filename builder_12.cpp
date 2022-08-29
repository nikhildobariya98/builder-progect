#include<iostream>
using namespace std;

class Supermarket{
  private:
  	int id;
  	string name,password,quantity,discount,number,tax;
  public:
  	void setSupermarketDetail(int id,string password,string number,string discount, string name, string quantity, string tax ){
  		this->id = id; 
		this->password = password;
  	    this->number = number;
		this->name = name;
		this->discount = discount;
		this-> quantity= quantity;
		this->tax = tax;	
	}
	void getSuparmarketDetail(){
		cout << "SuparmarketDetail: " << endl;
		cout << "ID: " << id << endl << "Password: " << password << endl << "Number: " << number << endl << "Name: " << name 
		<< endl << "Discount: " << discount << endl  << "Quantity: " << quantity << endl << "Tax: " << tax << endl;
	}
	
	void searchSupermarket(Supermarket market[], int id) {
		for(int i = 0; i < 3; i++){
			if(market[i].id == id){
					cout << "SuparmarketDetail: " << endl;
		cout << "ID: " << market[i].id << endl << "Password: " <<market[i]. password << endl << "Number: " << market[i].number << endl 
<< "Name: " << market[i].name << endl << "Discount: " << market[i].discount << endl  << "Quantity: " << market[i].quantity << endl 
<< "Tax: " << market[i].tax << endl;

			}
		}
	}
};

int main(){
	Supermarket market[2];
	
	int id;
  	string name,password,number,discount,quantity,tax;
  	
	for(int i = 0; i < 2; i++){
		cout << "Enter Suparmarket ID: ";
		cin >> id;
		cout << "Enter Suparmarket Name: ";
		cin >> name;
		cout << "Enter Suparmarket Password: ";
		cin >> password;
		cout << "Enter Suparmarket Number: ";
		cin >> number;
		cout << "Enter Suparmarket Discount: ";
		cin >> discount;
		cout << "Enter Suparmarket Quantity: ";
		cin >> quantity;
		cout << "Enter Suparmarket Tax: ";
		cin >> tax;
		cout<<endl;
		market[i].setSupermarketDetail(id, name, password, number, discount , quantity , tax);
	}
	
	int search;
	cout << endl << "Enter ID for search: ";
	cin >> search;
	cout << endl;
	
	Supermarket objForSearch;
	objForSearch.searchSupermarket(market, search);
}
