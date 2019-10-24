/*
Student Name: Zilola Matasimova
Student ID: 066 112 145

Prof. Name: Fardad Soleimanloo
Course Code: OOP244

Date: 07/26/19
*/

#include <iostream>
#include <cstring>
#include "Account.h"
using namespace std;
namespace sict {

	Account::Account() {
		m_balance = 0.0;
	}

	Account::Account(double balance )
	{
		(balance) ? m_balance = balance : m_balance = 0.0;
	}

	bool Account::credit(double amount)
	{
		bool value = false;
		if (amount > 0) {
			m_balance += amount;
			value = true;
		}
		return value;
	}

	bool Account::debit(double amount)
	{
		bool value = false;
		if (amount > 0 && amount < m_balance) {

			if (amount > 0) {
				m_balance -= amount;
				value = true;
			}
		}
		return value;

	}

	double Account::balance() const
	{
		return m_balance;
	}
}