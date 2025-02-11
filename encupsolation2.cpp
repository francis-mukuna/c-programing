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

class bankaccount {
	private:
		string accountholder;
		int balance;
	public:
		//setter for balance
		void setbalance(int s){
			balance=s;
		}
		//getter for balance
		int getbalance(){
			return balance;
		}
			//setter for accountholder
		void setaccountholder(string a){
			accountholder=a;
		}
		//getter for accountholder
		string getaccountholder(){
			return accountholder;
		}
		
};
int main (){
	// creating instance(object) of class
	bankaccount B;
	//calling function
	B.setaccountholder("francis");
	//display output
	cout<<B.getaccountholder()<<endl;
	//calling function
	B.setbalance(50000);
	//display output
	cout<<	B.getbalance()<<endl;
	
	return 0;
	
}
