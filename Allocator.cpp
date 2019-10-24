/*
Student Name: Zilola Matasimova
Student ID: 066 112 145

Prof. Name: Fardad Soleimanloo
Course Code: OOP244

Date: 07/26/19
*/
#include "SavingsAccount.h"
#include "ChequingAccount.h"
namespace sict {
	

	const double interest = 0.05;
	const double transactionFee = 0.50;
	const double monthlyFee = 2.00;

	iAccount* CreateAccount(const char* type, double balance) {

		iAccount *pAccount = nullptr;
		
		if (type[0] == 'S') {
			pAccount = new SavingsAccount(balance, interest);
			return pAccount;
		}
		else if (type[0] == 'C') {
			pAccount = new ChequingAccount(balance, transactionFee, monthlyFee);

		return pAccount;
		}

		else {
			return nullptr;
		}


	}
}