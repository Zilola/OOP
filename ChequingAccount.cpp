/*
Student Name: Zilola Matasimova
Student ID: 066 112 145

Prof. Name: Fardad Soleimanloo
Course Code: OOP244

Date: 07/26/19
*/
#include <iostream>
#include "ChequingAccount.h"

using namespace std;


sict::ChequingAccount::ChequingAccount(double balance, double transFee, double monthlyFee) :Account(balance)  //because balance is from Account
{
	(transFee > 0) ? m_transactionFee = transFee : m_transactionFee = 0.0;
	(monthlyFee > 0) ? m_monthEndFee = monthlyFee : m_monthEndFee = 0.0;
}

bool sict::ChequingAccount::credit(double amount)
{
	bool value = false;
	if (Account::credit(amount)) {
		Account::debit(m_transactionFee);
		value = true;
	}

	return value;

}

bool sict::ChequingAccount::debit(double amount)
{
	bool value = false;
	if (Account::debit(amount + m_transactionFee)) {
		// Account::debit(m_transFee);
		value = true;
	}

	return value;
}

void sict::ChequingAccount::monthEnd()
{
	m_balance -= m_monthEndFee;
}

void sict::ChequingAccount::display(std::ostream& out) const
{
	out << "Account type: Chequing" << endl;
	out.unsetf(ios::floatfield);
	out.setf(std::ios::fixed, std::ios::floatfield);
	out.precision(2);
	out << "Balance: $" << balance() << endl;
	out << "Per Transaction Fee: " << m_transactionFee << endl;
	out << "Monthly Fee: " << m_monthEndFee << endl;

}
