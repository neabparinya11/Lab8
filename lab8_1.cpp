#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,rateper,payper;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>rateper;
	cout << "Enter amount you can pay per year: ";
	cin>>payper;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i=1;
while(1){
	double amount,count;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	count=(loan*rateper)/100;
	cout << setw(13) << left << count;
	amount=loan+count;
	cout << setw(13) << left << amount;
	if(amount<payper){
		payper=amount;
	}
	cout << setw(13) << left << payper;
	loan=amount-payper;
	cout << setw(13) << left << loan;
	cout << "\n";
	i++;
	if(loan==0){
		break;
	}	
}

	return 0;
}


