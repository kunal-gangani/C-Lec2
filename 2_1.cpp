/*
1. WAP to get and display N numbers of Hotels and static
information using encapsulation with array of objects
member by including below mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity
Output:
Enter the Number of Records you want to Insert: 2
Enter Hotel ID : 101
Enter Hotel Name : Ayansh
Enter Hotel Type : Hotel
Enter Hotel Rating : 4
Enter Hotel Establishment Date : 2012
Enter Hotel Staff Quantity : 19
Enter Hotel Room Quantity : 25
Enter Hotel ID : 102
Enter Hotel Name : Ion
Enter Hotel Type : Motel
Enter Hotel Rating : 4
Enter Hotel Establishment Date : 2012
Enter Hotel Staff Quantity : 26
Enter Hotel Room Quantity : 16
Hotel ID is : 101
Hotel Name is : Ayansh
Hotel Type is : Hotel
Hotel Rating is : 4
Hotel Location is : Surat
Hotel Establishment Year is : 2012
Hotel Staff Quantity is : 19
Hotel Room Quantity is : 25
Hotel ID is : 102
Hotel Name is : Ion
Hotel Type is : Motel
Hotel Rating is : 2
Hotel Location is : Surat
Hotel Establishment Year is : 2012
Hotel Staff Quantity is : 26
Hotel Room Quantity is : 16
*/
#include<iostream>
using namespace std;
class HotelInfo{
	int id;
	char hotel_name[20];
	char type[10];
	int rating;
	static char location[25];
	int establish;
	int staff_quan;
	int room_quan;
	public:
		void setData(){
			cout<<"Enter Hotel ID : ";
			cin>>id;
			cout<<"Enter Hotel Name : ";
			cin>>hotel_name;
			cout<<"Enter Hotel Type : ";
			cin>>type;
			cout<<"Enter Hotel Rating : ";
			cin>>rating;
			cout<<"Enter Hotel Establishment Date : ";
			cin>>establish;
			cout<<"Enter Hotel Staff Quantity : ";
			cin>>staff_quan;
			cout<<"Enter Hotel Room Quantity : ";
			cin>>room_quan;
		}
		void getData(){
			cout<<"Hotel ID is : "<<id<<endl;
			cout<<"Hotel Name is : "<<hotel_name<<endl;
			cout<<"Hotel Type is : "<<type<<endl;
			cout<<"Hotel Rating is : "<<rating<<endl;
			cout<<"Hotel Location is : "<<location<<endl;
			cout<<"Hotel Establishment Year is : "<<establish<<endl;
			cout<<"Hotel Staff Quantity is : "<<staff_quan<<endl;
			cout<<"Hotel Room Quantity is : "<<room_quan<<endl;
		}
};
	char HotelInfo :: location[25] = "Surat";
int main(){
	int i,n;
	cout<<"Enter the Number of Records you want to Insert: ";
	cin>>n;
	HotelInfo h[n];
	for(i=1;i<=n;i++){
		h[i].setData();
	}
	for(i=1;i<=n;i++){
		h[i].getData();
	}
}
