#include "shop.h"
#include "tabletki.h"

int main()
{
	ofstream onf("cheque.txt");
    tabletki_ua medicine("Aspirin", 100.0);

    medicine.discount50(); // Зменшить ціну на 10%
    medicine.printCheque(onf); 
    medicine.printCheque(cout); // Виведе чек у консоль

	onf.close();
}