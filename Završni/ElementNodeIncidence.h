#pragma once
#include <vector>
#include "Resistor.h"
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

class ElementNodeIncidence
{
private:
	vector<Resistor> m_elements;
	vector<Node>     m_nodes;

	vector <vector<int> > m_matrix;

	bool m_sorted;
public:
	ElementNodeIncidence();

	vector <vector<int> > getMatrix();
	vector<Node>		  getNodes();

	void addElement(Resistor);
	void sortNodes();
	
	void addMatrixElement(int, Resistor);
	void formMatrix();

	void printMatrix();
};

