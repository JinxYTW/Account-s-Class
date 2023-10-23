#include <iostream>

class PrimaryAccount : public Account {

public:
	PrimaryAccount(std::string FullName, std::string IBAN, double sold;double decouvert) : Account(std::string FullName, std::string IBAN, double sold);
	
	
private:

	double _decouvert;




	double add(double amount);

	double retreat(double amount);

	double transfert(double amount, Account& people);

};

