#include <iostream>
#include "account.h"

class Epargne : public Account {
public:

	Epargne(std::string FullName, std::string IBAN, double sold, double taux) ;

	double apply();
	

private:

	double _taux;
	




};