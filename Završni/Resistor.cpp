#include "Resistor.h"

Resistor::Resistor(double value, Node   node_1, Node   node_2, ElementOrientation orientation)
	: Element(node_1, node_2, orientation) {
	m_value = value;
}

void Resistor::setValue(double value) {
	m_value = value;
}

double Resistor::getValue() {
	return m_value;
}

