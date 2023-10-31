#include <iostream>
#include <epargne.h>

Epargne::Epargne(std::string FullName, std::string IBAN, double sold, double taux): Account(FullName, IBAN, sold)
{
	_taux = taux;

}


double Epargne::apply()
{
    double newSold = sold() + sold() * (_taux / 100.0);
    setSold(newSold);
    return newSold;
}
