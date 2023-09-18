#include "BusIncidence.h"
using namespace std;

void addNetwork(ElementNodeIncidence&);

int main()
{
	ElementNodeIncidence elementNodeIncidence;

	addNetwork(elementNodeIncidence);

	elementNodeIncidence.formMatrix();

	cout << "ElementNodeIncidence\n";

	elementNodeIncidence.printMatrix();

	BusIncidence busIncidence(elementNodeIncidence.getMatrix(), elementNodeIncidence.getNodes());

	cout << "\nBusIncidence\n";
	busIncidence.printMatrix();
}

void addNetwork (ElementNodeIncidence& matrix) {
	Resistor resistor_1(1, 0, 1);
	Resistor resistor_2(1, 0, 2);
	Resistor resistor_3(1, 0, 4);
	Resistor resistor_4(1, 3, 4, Descending);
	Resistor resistor_5(1, 2, 3);
	Resistor resistor_6(1, 1, 2);
	Resistor resistor_7(1, 2, 4);

	matrix.addElement(resistor_1);
	matrix.addElement(resistor_2);
	matrix.addElement(resistor_3);
	matrix.addElement(resistor_4);
	matrix.addElement(resistor_5);
	matrix.addElement(resistor_6);
	matrix.addElement(resistor_7);
}

