/*
Student Name: Zilola Matasimova
Student ID: 066 112 145

Prof. Name: Fardad Soleimanloo
Course Code: OOP244

Date: 07/19/19
*/
#pragma once

#include "iAccount.h"

namespace sict {
	class Account : public iAccount {

	protected:
		double m_balance;	
		double balance() const;

	public:
		Account();
		Account(double );
		bool credit(double );
		bool debit(double );

	};
	iAccount* CreateAccount(const char*, double );
	
}
