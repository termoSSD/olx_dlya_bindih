#include "Header.h"
#include "Prom.h"
#include "shop.h"
#include "tabletki.h"

int main() 
{
	ofstream onf("cheque.txt");

	Prom iPhone("iPhone", 1000);
	tabletki_ua medicine("Aspirin", 100.0);

	iPhone.discaunt25();
	iPhone.showinfo(onf);
	iPhone.showinfo(cout);

	cout << endl;

    medicine.discount50();
    medicine.printCheque(onf); 
    medicine.printCheque(cout);

	onf.close();
}