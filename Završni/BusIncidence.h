#pragma once
#include "ElementNodeIncidence.h"

using namespace std;

class BusIncidence
{
private:
	vector <vector<int> > m_matrix;

	vector<Node>     m_nodes;
public:
	BusIncidence(vector <vector<int> >, vector<Node>);

	void printMatrix();
};

