#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class shop
{
protected:
	string name;
	double price;
public:
	shop() { name = "noName"; price = 0.0; }
	virtual ~shop() {}

	virtual double discount15()
	{
		this->price = price - price / 6;
		return price;
	}
	virtual double discount25() 
	{
		this->price = price - price / 4;
		return price;
	}
	virtual double discount50()
	{
		this->price = price - price / 2;
		return price;
	}

	virtual void printCheque(ostream& onf)
	{
		onf << "--- Cheque ---" << endl;
		onf << name << ": " << price << "$";
	}
};