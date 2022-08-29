#include<iostream>
using namespace std;

class Train{
  private:
  	int id;
  	string name, source, destination, time;
  public:
  	void setTrainDetail(int id, string name, string source, string destination, string time){
  		this->id = id;
		this->name = name;
		this->source = source;
		this->destination = destination;
		this->time = time;	
	}
	void getTrainDetail(){
		cout << "Train Details: " << endl;
		cout << "ID: " << id << endl << "Name: " << name << endl << "Source: " << source << endl << "Destination: " << destination 
		<< endl << "Time: " << time << endl;
	}
	
	void searchTrain(Train train[], int id) {
		for(int i = 0; i < 3; i++){
			if(train[i].id == id){
				cout << "Train Details: " << endl;
				cout << "ID: " << train[i].id << endl << "Name: " << train[i].name << endl << "Source: " << train[i].source << endl 
				<< "Destination: " << train[i].destination << endl << "Time: " << train[i].time << endl;
			}
		}
	}
};

int main(){
	Train train[3];
	int id;
	string name, source, dest, time;
	for(int i = 0; i < 3; i++){
		cout << "Enter train ID: ";
		cin >> id;
		cout << "Enter train Name: ";
		cin >> name;
		cout << "Enter train Source: ";
		cin >> source;
		cout << "Enter train Destination: ";
		cin >> dest;
		cout << "Enter train Time: ";
		cin >> time;
		train[i].setTrainDetail(id, name, source, dest, time);
	}
	
	int search;
	cout << endl << "Enter ID for search: ";
	cin >> search;
	cout << endl;
	
	Train objForSearch;
	objForSearch.searchTrain(train, search);
}
