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
struct customer {
    string name;               // Field to store the customer's name
    double account_balance;    // Field to store the account balance
    string last_transaction;   // Field to store the customer's last transaction date
};

// Function to display the details of a customer
void display(const customer& c1) {
    // output customer details
    cout << "name: " << c1.name << endl;
    cout << "account_balance: " << c1.account_balance << endl;
    cout << "last_transaction: " << c1.last_transaction << endl;
    cout << endl;
}

int main() {
    // Creating and initializing two customer objects 
    customer c1 = {"john", 50000.05, "march"};  // Customer 1 details
    customer c2 = {"james", 110000.05, "june"}; // Customer 2 details
    
    // Calling the 'display' function to print customer details
    display(c1);  // Display details of customer 1
    display(c2);  // Display details of customer 2

    return 0; 
}

