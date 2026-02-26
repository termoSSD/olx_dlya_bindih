#include "Header.h"
#include "Prom.h"

int main() 
{
	ofstream onf("Text.txt");

	Prom iPhone("iPhone", 1000);

	iPhone.discaunt25();
	iPhone.showinfo(onf);

	onf.close();
}