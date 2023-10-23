#include <iostream>
#include "primaryaccount.h"

PrimaryAccount::PrimaryAccount(std::string FullName, std::string IBAN, double sold;double decouvert)
{
	_decouvert = decouvert;

}

double PrimaryAccount::add(double amount) {

	sold = sold + amount;

	return 0.0;
}

double PrimaryAccount::retreat(double amount)
{
	sold = sold - amount;

	return 0.0;
}

double PrimaryAccount::transfert(double amount, Account& people )
{
	sold = sold - amount;
	people.sold = people.sold + amount;

	return 0.0;
}
