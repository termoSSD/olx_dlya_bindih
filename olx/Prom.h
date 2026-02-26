#pragma once
#include "Header.h"

class Prom : public Shop
{

public:
	Prom() { Shop(); }
	Prom(string n, double p) 
	{
		name = n;
		price = p;
	}
	~Prom() {}

	double discaunt(){}
	double discaunt25()
	{
		this->price = (price - price/ 4);
		return price;
	}

	double discaunt50()
	{
		this->price = (price / 2);
		return price;
	}
	void showinfo(ostream& onf)
	{
		onf << "Cheque: " << endl;
		onf << "Product name: " << name << " Price: " << price << "$" << endl;
	}
};
