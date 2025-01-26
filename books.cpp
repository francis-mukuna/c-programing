//c user defined functions
/*
c redefined functions
autor:Francis Macharia Mukuna
reg no: BSE-05-0166/2024
date:22/01/2024
version
*/
#include<iostream>// cout (printf()),cin
#include<cmath>
#include<string>
using namespace std;


// valiable declaration
string bookID,Daysoverdue;
int dueDate, returnDate,fine;
int main(){
// prompt the user to enter bookID
	cout<<"enter the bookID:"<<endl;
	cin>>bookID;
	// prompt the user to enter dueDate
	cout<<"enter the dueDate:"<<endl;
	cin>>dueDate;
	// prompt the user to enter returnDate	
	cout<<"enter the returnDate:"<<endl;
	cin>>returnDate;
	// Function to calculate the fine based on days overdue
	int daysOverdue;
	{
	daysOverdue=(returnDate-dueDate);
	if (daysOverdue >= 1 && daysOverdue<= 7) {
         fine=(daysOverdue * 20);
    } else if (daysOverdue >= 8 && daysOverdue<= 14) {
         fine=(daysOverdue * 50);
    } else if (daysOverdue >= 15) {
         fine=(daysOverdue * 100);
    } 
    

    
	 // Displaying the results
    cout << "bookID: " << bookID << endl;
    cout << "dueDate: " << dueDate << endl;
    cout << "returnDate: " << returnDate << endl;
    cout << "daysOverdue: " << daysOverdue << endl;
    cout << "Fine: Ksh. " << fine << endl;
	return 0;}}

