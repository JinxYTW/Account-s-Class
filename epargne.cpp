#include <iostream>
#include <epargne.h>

Epargne::Epargne(std::string FullName, std::string IBAN, double sold; double taux)
{
	_taux = taux;

}


double Epargne::apply(double sold, double taux)
{
	sold = sold + sold * taux;
	return 0.0;
}
