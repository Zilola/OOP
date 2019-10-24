/*
Student Name: Zilola Matasimova
Student ID: 066 112 145

Prof. Name: Fardad Soleimanloo
Course Code: OOP244

Date: 07/19/19
*/

#include <iostream>
#include "SavingsAccount.h"
namespace sict {

	SavingsAccount::SavingsAccount(double balance, double interestRate) :Account(balance)
	{
		(interestRate > 0) ? m_interest = interestRate : m_interest = 0.0;

	}

	void SavingsAccount::monthEnd()
	{
		double interest = (balance() * m_interest);
		credit(interest);
	}

	void SavingsAccount::display(std::ostream & out) const
	{
		out << "Account type: Savings" << std::endl;
		out.unsetf(std::ios::floatfield);
		out.precision(2);
		out.setf(std::ios::fixed, std::ios::floatfield);
		out << "Balance: $" << balance() << std::endl;
		out << "Interest Rate (%): " << m_interest * 100 << std::endl;
	}

}