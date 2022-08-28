#include<iostream>
using namespace std;
class Hotel{
	private:
		int id, staff_size, room_size, established_year, ratings;
		string name, type, address, website;
	public:
		void setHotel(int id, int staff_size, int room_size, int established_year, int rating, string name, string type, string address, string website){
			this->id = id;
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->established_year = established_year;
			this->ratings = ratings;
			this->name = name;
			this->type = type;
			this->address = address;
			this->website = website;
		}
		
		void getHotel(){
			cout << "Enter id: "<< id << endl << "Enter Name: "<< name << endl<< "Enter Address: " << address << endl
     <<"Enter Type: "  << type << endl  <<"Enter Staff_size: "<< staff_size << endl  << "Enter Room_Size: "<< room_size << endl
	<<"Enter Established_year: " << established_year << endl <<"Enter Rating: "<< ratings << endl<< "Enter Website: " << website << endl;
		}
      
};
int main(){
	int  id, staff_size, room_size, established_year, ratings;
		string name, type, address, website;
	 cout <<" Enter the Dateil of Hotel " << endl << endl ;
	  cout << "Enter The Hotel id :";
	  cin >> id ;
	   cout << "Enter The Hotel Name :";
	  cin >> name ;
	   cout << "Enter The Hotel Address :";
	  cin >> address ;
	   cout << "Enter The Hotel Type :";
	  cin >> type ;
	   cout << "Enter The Hotel Staff_size :";
	  cin >> staff_size ;
	   cout << "Enter The Hotel Room_size :";
	  cin >> room_size ;
	   cout << "Enter The Hotel Established_year :";
	  cin >> established_year ;
	  cout << "Enter The Hotel Rating :";
	  cin >> ratings ;
	  cout << "Enter The Hotel Website :";
	  cin >> website;
	  cout << endl;
	  
  Hotel hotel;
  hotel.setHotel(id, staff_size, room_size , established_year, ratings,  name , type ,  address ,  website);
  hotel.getHotel();
}
