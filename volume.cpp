//c user defined functions
/*
c redefined functions
autor:Francis Macharia Mukuna
reg no: BSE-05-0166/2024
date:22/01/2024
version
*/
#include<iostream>// cout (printf()),cin
#include <cmath> //m_pi
using namespace std;
int main(){
		float volume, radius,height;// variable decralation
	// prompt the user to enter radius
	cout<<"enter the radius:"<<endl;
	cin>>radius;
	
	// prompt the user to enter height
	cout<<"enter the height:"<<endl;
	cin>>height;
	
	// Calculations
    volume = M_PI *(radius*radius) * height;
   

    // Output results
      cout << "Volume of the cylinder: " << volume <<endl;
    return 0;
}
