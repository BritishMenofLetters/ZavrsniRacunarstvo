#include "Element.h"

Element::Element(Node node_1, Node node_2, ElementOrientation orientation) {
	m_node_1 = node_1;
	m_node_2 = node_2;

	m_orientation = orientation;
};

void Element::setNode_1(Node node) {
	m_node_1 = node;
}

void Element::setNode_2(Node node) {
	m_node_2 = node;
}

void Element::setOrientation(ElementOrientation orientation) {
	m_orientation = orientation;
}

Node Element::getNode_1() {
	return m_node_1;
}

Node Element::getNode_2() {
	return m_node_2;
}

ElementOrientation Element::getOrientation() {
	return m_orientation;
}

