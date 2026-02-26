#pragma once
#include "shop.h"

class tabletki_ua : public shop
{
public:
	tabletki_ua() : shop() {}
	tabletki_ua(string n, double p) 
	{
		name = n;
		price = p;
	}
	~tabletki_ua() {}

	double discount15()
	{
		this->price = price - price / 6;
		return price;
	}
	double discount25()
	{
		this->price = price - price / 4;
		return price;
	}
	double discount50()
	{
		this->price = price - price / 2;
		return price;
	}

	void printCheque(ostream& onf)
	{
		onf << "--- Cheque ---" << endl;
		onf << "Mediceine: " << name << " --- " << price << "$" << endl;
	}
};