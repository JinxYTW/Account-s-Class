#include <iostream>

class Epargne : public Account {
public:

	Epargne(std::string FullName, std::string IBAN, double sold; double taux) : Account(std::string FullName, std::string IBAN, double sold);

	

private:

	double _taux;
	double apply(double sold, double taux);




};