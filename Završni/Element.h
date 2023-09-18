#pragma once
#include "NetworkTypes.h"
class Element
{
private:
	Node m_node_1;
	Node m_node_2;

	ElementOrientation m_orientation;

public:
	Element(Node, Node, ElementOrientation orientation = Ascending);

	void setNode_1(Node);
	void setNode_2(Node);
	void setOrientation(ElementOrientation);

	Node getNode_1();
	Node getNode_2();
	ElementOrientation getOrientation();
};

