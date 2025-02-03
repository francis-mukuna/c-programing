//c user defined functions
/*
c redefined functions
autor:Francis Macharia Mukuna
reg no: BSE-05-0166/2024
date:22/01/2024
version
*/
#include<iostream>
#include<string>
using namespace std;
class car{
	public://access modifier
	// valuable declaration
		string brand;
		string model;
	    float price;
		int mileage;
		int updatedmileage;
		
		int drive;
		int calculateupdatedmileage(){
				//prompt the use to enter drive
				cout<<"enter drive:"<<endl;
		cin>>drive;
		// calculate the updated mileage
		return updatedmileage=mileage+drive;
		}
		};
int main(){
	car c1;
	//calling the valuable
	c1.brand= "toyota";
	c1.model="corolla";
	c1.price=20000;
	c1.mileage =5000;
	double updatedmileage;
	updatedmileage=c1.calculateupdatedmileage();
	//display the results
			cout<<"brand:"<<c1.brand<<endl;
		cout<<"model:"<<c1.model<<endl;
		cout<<"price:"<<c1.price<<endl;
		cout<<"mileage:"<<c1.mileage<<endl;
	    cout<<"updatedmileage:"<<updatedmileage<<endl;
	return 0;
}

