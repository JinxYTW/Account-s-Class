class Account {

public :

	Account(std::string FullName, std::string IBAN,  double sold);
	//Getter

	std::string FullName();
	std::string IBAN();
	double sold();

	//Methods

	void show();



private:

	std::string _FullName;
	std::string _IBAN;
	int _sold;


};