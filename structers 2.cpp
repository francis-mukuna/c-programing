//stucters
/*
c redefined functions
autor:Francis Macharia Mukuna
reg no: BSE-05-0166/2024
date:16/03/2024
version
*/
#include<iostream>
#include<string>
using namespace std;
// Defining a structure called 'customer' to store customer details
 struct customer{
 	string name;
 	double account_balance;
 	string last_transaction;
 };
 // functions to display details for customers
 void display(const customer&c){
 	// oupput for customer
 	cout<<"name: "<<c.name<<endl;
 	cout<<"account_balance: "<<c.account_balance<<endl;
	 cout<<"last_transaction: "<<c.last_transaction<<endl;
	 cout<<endl;
 }
 
 int main (){
 	// creating an object for customers
 	customer c;
 	// allows the user enter customer's details
 cout<<"enter name"<<endl;
 cin>> c.name;
 cout<<"enter account_balance: "<<endl;
 cin>>c.account_balance;
 cout<<"enter last_transaction: "<<endl;
 cin>>c.last_transaction;
 cout<<endl;
 // display details for customer
 display(c);
 
 return 0;
}
