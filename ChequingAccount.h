#ifndef SICT_CHEQUINGACCOUNT_H
#define SICT_CHEQUINGACCOUNT_H
#include "Account.h"
namespace sict {

	class ChequingAccount: public Account {
		double m_transactionFee;
		double m_monthEndFee;
		double m_balance;
		void set(double,double,double);
	public:
		ChequingAccount(double, double, double);
		bool credit(double);
		bool debit(double);
		void monthEnd();
		void display(std::ostream&) const;




	};
	}
#endif