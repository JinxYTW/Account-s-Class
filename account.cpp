#include"account.h"
#include <string>

Account::Account(std::string FullName, std::string IBAN, double sold) {
	_FullName = FullName;
	_IBAN = IBAN;
	_sold = sold;
}

std::string Account::FullName(){
	return _FullName;
}
std::string Account:: IBAN(){
	return _IBAN;
}
int Account:: sold(){
	return _sold;
}

void Account::show(){
	std::cout << "Owner : " << _FullName << std::endl;
	std::cout << "IBAN : " << _IBAN << endl;
	std::cout << "Sold : " << _sold << endl;
}


