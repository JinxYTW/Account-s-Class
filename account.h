class Account {

public :

	
	Account(std::string FullName, std::string IBAN,  double sold);
	//Getter
	std::string FullName();
	std::string IBAN();
	double sold();

    

    //Methods

	void show();
	void setSold(double newSold);




private:

	std::string _FullName;
	std::string _IBAN;
	double _sold;


};