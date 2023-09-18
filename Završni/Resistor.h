#pragma once
#include "Element.h"

class Resistor : public Element
{
private:
	double m_value;
public:
	Resistor(double, Node, Node, ElementOrientation = Ascending);

	void   setValue(double);
	double getValue();
};

