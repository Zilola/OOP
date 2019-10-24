/*
Student Name: Zilola Matasimova
Student ID: 066 112 145

Prof. Name: Fardad Soleimanloo
Course Code: OOP244

Date: 07/26/19
*/
#pragma once

#include <iostream>


namespace sict {
	//based class
	class iAccount {
		
	public:
		virtual ~iAccount() {};
		virtual bool credit(double amount)=0;
		virtual bool debit(double amount)=0;
		virtual void monthEnd()=0;
		virtual void display(std::ostream& out) const=0;

	};
	iAccount* CreateAccount(const char* , double);

}
