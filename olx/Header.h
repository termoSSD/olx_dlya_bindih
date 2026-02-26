#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Shop
{
protected:
	string name;
	double price;
public:
	Shop()
	{
		name = " ";
		price = 0;
	}
	virtual ~Shop() {}

	virtual double discaunt25()
	{
		price - (price / 4);
		return price;
	}

	virtual double discaunt50()
	{
		price - (price / 2);
		return price;
	}

	void showinfo(ostream& onf)
	{
		onf << "Name: " << name << endl;
		onf << "Price: " << price << "$" <<endl;
	}

};