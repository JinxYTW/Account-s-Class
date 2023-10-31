#include <iostream>
#include "primaryaccount.h"

PrimaryAccount::PrimaryAccount(std::string FullName, std::string IBAN, double sold,double decouvert): Account(FullName, IBAN,  sold)
{
	_decouvert = decouvert;

}

double PrimaryAccount::add(double amount) {

	double newSold = sold() + amount;
    setSold(newSold);

	return 0.0;
}

double PrimaryAccount::retreat(double amount)
{
	double newSold = sold() - amount;
    setSold(newSold);

	return 0.0;
}

double PrimaryAccount::transfert(double amount, Account& people )
{
	double newSold = sold() - amount;
    setSold(newSold);
    people.setSold(people.sold() + amount);

	return 0.0;
}
