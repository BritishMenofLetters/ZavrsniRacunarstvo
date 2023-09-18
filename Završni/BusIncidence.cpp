#include "BusIncidence.h"

BusIncidence::BusIncidence(vector <vector<int> > matrixElementNode, vector<Node> nodes) {
	int row_number   = matrixElementNode.size();
	int colum_number = matrixElementNode[0].size();

	m_matrix = vector<vector<int> >(row_number, vector<int>(colum_number - 1));

	// remove first column
	for (int i = 0; i < row_number; i++) {
		for (int j = 1; j < colum_number; j++)
		{
			m_matrix[i][j-1] = matrixElementNode[i][j];
		}
	}

	m_nodes = nodes;
	//erese first node (column)
	m_nodes.erase(m_nodes.begin());
}

void BusIncidence::printMatrix() {
	int row_number = m_matrix.size();
	int colum_number = m_matrix[0].size();
	// print matrix vertical line
	cout << "  |";

	// print matrix Node label
	for (int j = 0; j < m_nodes.size(); j++)
		cout << setw(3) << m_nodes[j] << " ";

	cout << "\n";

	// print matrix horizontal line
	for (int i = 0; i < 4 * (m_nodes.size() + 1); i++)
		cout << "-";

	cout << "\n";

	// print Matrix
	for (int i = 0; i < m_matrix.size(); i++) {
		cout << i + 1 << " |";
		for (int j = 0; j < m_matrix[i].size(); j++)
		{
			cout << setw(3) << m_matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

