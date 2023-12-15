#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double Total,Interest,Payment,PrevBalance ;

	cout << "Enter initial loan: ";
    cin >> PrevBalance ;
	cout << "Enter interest rate per year (%): ";
    cin >> Interest ;
	cout << "Enter amount you can pay per year: ";
    cin >> Payment ;


	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	for(int i=0;PrevBalance>0;i++){

    cout << fixed << setprecision(2); 
	cout << setw(13) << left << i+1; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << PrevBalance*(Interest/100);
    PrevBalance = PrevBalance + PrevBalance*(Interest/100) ;
	cout << setw(13) << left << PrevBalance;
    if(PrevBalance < Payment)
        Payment = PrevBalance ;
    cout << setw(13) << left << Payment;
    PrevBalance = PrevBalance - Payment ;
	cout << setw(13) << left << PrevBalance;
	cout << "\n";
    }
    	
	
	return 0;
}