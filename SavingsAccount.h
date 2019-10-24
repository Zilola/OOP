/*
Student Name: Zilola Matasimova
Student ID: 066 112 145

Prof. Name: Fardad Soleimanloo
Course Code: OOP244

Date: 07/26/19
*/

#pragma once
#ifndef SICT_HEADER_H
#define SICT_HEADER_H

#include <iostream>
#include <cstring>
#include "Account.h"

namespace sict{
	class SavingsAccount : public Account {
		double m_interest;
		

	public:
		SavingsAccount(double, double );
		void monthEnd();
		void display(std::ostream& out ) const;

	};
}
#endif 
