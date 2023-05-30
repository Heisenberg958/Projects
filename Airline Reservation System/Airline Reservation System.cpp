#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;


class Flight{
	public:
		char fltno[20],from[20],to[20],time[10];
		int ecofare,exefare,days,arrdays[7];
		
	void Enquiry(){
		
		int count=0;
		char ftno[20];
		cout<<"\n------Enquiry-----\n";
		cout<<"Enter Flight No: ";
		fflush(stdin);
		gets(ftno);
		
		fstream f;
		f.open("flight.dat",ios::in);
		
		while(f.read((char*)this,sizeof(Flight))){
			
			if(strcmp(ftno,fltno)==0){
				count=1;
				break;
			}
		}
		f.close();
		if(count==0){
			cout<<"\n-----No Records were Found-----\n\n";
		}
		else{
			cout<<"\n Flight Number: "<<fltno;
			cout<<"\n From: "<<from<<"\tTo: "<<to;
			cout<<"\n Economic Fare: "<<ecofare<<"\tExecutive Fare: "<<exefare;
			cout<<"\n Time: "<<time;
			cout<<"\n Days: "<<days<<endl;
			char dayar[20][20]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
			for(int i=0;i<7;i++){
				if(arrdays[i]==1){
					cout<<dayar[i]<<",";
				}
			}
		}
		getch();
			
	}
	
	void Add_Flight_Record(){
		system("cls");
		cout<<"ADD FLIGHT RECORD";
		
			
		while(1){
		cout<<"\nEnter Flight Number: ";
		fflush(stdin);
		gets(fltno);
		if(strlen(fltno)==0){
			cout<<"\nPlease Enter Flight Number Correctly";
		}
		else if(found_flight(fltno)){
			cout<<"\nAlready Exists";
		}
		else{
			break;
		}
		}
		
		
		while(1){
		cout<<"\nEnter From (City Name): ";
		fflush(stdin);
		gets(from);
		if(strlen(from)==0){
			cout<<"\nPlease Enter City Name Correctly";
		}
		else{
			break;
		}
		}
		
		
		
		while(1){
		cout<<"\nEnter To (City Name): ";
		fflush(stdin);
		gets(to);
		if(strlen(to)==0){
			cout<<"\nPlease Enter Destination Correctly";
		}
		else{
			break;
		}
		}
		
		
		while(1){
		cout<<"\nEnter Economic Fare: ";
		cin>>ecofare;
		if(ecofare<=0){
			cout<<"\nPlease Enter Economic Fare Correctly";
		}
		else{
			break;
		}
		}
		
		
		while(1){
		cout<<"\nEnter Executive Fare: ";
		cin>>exefare;
		if(exefare<=0){
			cout<<"\nPlease Enter Executive Fare Correctly";
		}
		else{
			break;
		}
		}
		
		
		while(1){
		cout<<"\nEnter Flight Time(HH:MM): ";
		fflush(stdin);
		gets(time);
		if(strlen(time)==0||strlen(time)>5){
			cout<<"\nPlease Enter Flight Time Correctly";
		}
		else{
			break;
		}
		}
		
		
		while(1){
		cout<<"\n Number of Days: ";
		cin>>days;
		if(days<=0||days>7){
			cout<<"\nPlease Enter Days Correctly";
		}
		else{
			break;
		}
		}
		
		
		cout<<"1.Sunday\t2.Monday\t3.Tuesday\t4.Wednesday\t5.Thursday\t6.Friday\t7.Saturday";
		cout<<"\nSelect"<<days<<"days";
		int tday;
		for(int i=0;i<days;i++){
			
			while(1){
			cout<<"\nEnter Day no "<<i+1<<":";
			cin>>tday;
			if(tday<1||tday>7){
				cout<<"Please Input between 1-7";
			}
			else{
			break;	
			}	
			}
			arrdays[tday-1]=1;
		
		}
		
		char ch;
		cout<<"Save Record? y/n\t ";
		cin>>ch;
	if(ch=='y'||ch=='Y'){
		fstream f;
		f.open("flight.dat",ios::app);
		f.write((char*)this,sizeof(Flight));
		f.close();
		cout<<"Record Saved!";
	}
			
	
	}
	
	
	void Delete_Flight_Record(){
		
	}
	void Modify_Flight_Record(){
		
	}
	int found_flight(char fltno[20]){
		return 0;
	}
	
	void List_Flight(){
		int count=0;
		cout<<"\n------Flight List-----\n";
		fstream f;
		f.open("flight.dat",ios::in);
		printf("\n|%-10s|%-15s|%-20s|%-10s|%-10s|%-10s|","fltno","from","to","ecofare","exefare","time");
		while(f.read((char*)this,sizeof(Flight))){
			printf("\n|%-10s|%-15s|%-20s|%-10d|%-10d|%-10s|",fltno,from,to,ecofare,exefare,time);
			count++;
		}
		f.close();
		if(count==0){
			cout<<"\n-----No Records were Found-----\n\n";
		}
		else{
			cout<<"\n-----"<<count<<"Records Found------\n\n";
		}
		getch();
		
	}
	void List_Flight_Place(){
		char place[20];
		int count=0;
		cout<<"Enter Place Name: ";
		fflush(stdin);
		gets(place);
		
		cout<<"\n------Flight List Placewise-----\n";
		fstream f;
		f.open("flight.dat",ios::in);
		printf("\n|%-10s|%-15s|%-20s|%-10s|%-10s|%-10s|","fltno","from","to","ecofare","exefare","time");
		while(f.read((char*)this,sizeof(Flight))){
			if(strcmpi(from,place)==0||strcmpi(to,place)==0){
				
			printf("\n|%-10s|%-15s|%-20s|%-10d|%-10d|%-10s|",fltno,from,to,ecofare,exefare,time);
			count++;
			}
		}
		f.close();
		if(count==0){
			cout<<"\n-----No Records were Found-----\n\n";
		}
		else{
			cout<<"\n-----"<<count<<"Records Found------\n\n";
		}
		getch();
	}
	
	
	
};

class Passenger{
	public:
		void Reservation(){
			
		}
		void Cancellation(){
			
		}
		void List_Passenger(){
			
		}
		void List_Passenger_Flight_Wise(){
			
		}
		void List_Passenger_Date_Wise(){
			
		}
		void List_of_All_Passengers(){
			
		}
		
};

class Airline{
	string password,temppassword;
	
	public:
	Airline(){
	cout<<"\nWelcone To -Airline Reservation System\n";
	login();
	}
	
	
	void password_creation(){
	cout<<"Create Your Password ?";
	cin>>password;
	cout<<"Confirm your Password?";
	cin>>temppassword;
		if(password==temppassword){
	
		ofstream fout;
		fout.open("Admin.txt");
		fout<<password;
		fout.close();
		cout<<"\nPassword Created Successfully\n";
		}
		else{
		cout<<"Password Not Matched";
		exit(0);
		}
	}
	
	
	void login(){
		ifstream fin;
		fin.open("Admin.txt");
		if(fin.is_open()){
		cout<<"Enter Your Password ?";
		cin>>password;
		fin>>temppassword;
		if(password==temppassword){
			main_menu();
		}
		else{
			cout<<"Try Again";
			exit(0);
		}
	}
	else{
		password_creation();
		main_menu();
	}
	
	}
	
	
	void main_menu(){
		int choice;
		Flight ft;
		Passenger p;
		cout<<"\nMain Menu\n";
		cout<<"1.Enquiry\n2.Reservation\n3.Cancellation\n4.Flight Maintenance";
		cout<<"\n5.Reports\n6.Change Password\n0.Exit\n";
		cout<<"Choose Your Option:";
		cin>>choice;
		switch(choice){
			case 1:ft.Enquiry();break;
			case 2:p.Reservation();break;
			case 3:p.Cancellation();break;
			case 4:Flight_Maintenance();break;
			case 5:Reports();break;
			case 6:Change_Password();break;
			case 0:exit(0);break;
		}
		cout<"\nContinue..";
		getch();
		system("cls");
		main_menu();
		
	}
	
	
	 void Flight_Maintenance(){
	 	int choice;
		Flight ft;
		Passenger p;
		cout<<"\nFlight Maintenance\n";
		cout<<"1.Add Flight Record\n2.Delete Flight Record\n3.Modify Flight Record\n";
		cout<<"4.Reports\n5.Back\n0.Exit\n";
		cout<<"Choose Your Option: ";
		cin>>choice;
		switch(choice){
			case 1:ft.Add_Flight_Record();break;
			case 2:ft.Delete_Flight_Record();break;
			case 3:ft.Modify_Flight_Record();break;
			case 5:return;
			case 0:exit(0);break;
		}
		Flight_Maintenance();
	 }
	 
	 void Reports(){
	 	int choice;
		Flight ft;
		Passenger p;
		cout<<"\nReport Menu\n";
		cout<<"1.List of Flights\n2.List of Flights(Place wise)";
		cout<<"3.List of Passengers\n4.List of Passengers(Flight Wise)";
		cout<<"5.List of Passengers(Date Wise)";
		cout<<"6.List of All Passengers";
		cout<<"\n7.Back";
		
		cout<<"\nChoose Your Option: ";
		cin>>choice;
		switch(choice){
			case 1:ft.List_Flight();break;
			case 2:ft.List_Flight_Place();break;
			case 3:p.List_Passenger();break;
			case 4:p.List_Passenger_Flight_Wise();break;
			case 5:p.List_Passenger_Date_Wise();break;
			case 6:p.List_of_All_Passengers();break;
			case 7:return;
		} 
		Reports();
	 }
	 
	 void Change_Password(){
	cout<<"Enter Old Password ?";
	cin>>password;
	ifstream fin;
	fin.open("Admin.txt");
	fin>>temppassword;
	if(password==temppassword){
		password_creation();
	}
	else{
	cout<<"Try Again";
	exit(0);
	}
	}

};


int main(){
	Airline ar;
	return 0;
}
