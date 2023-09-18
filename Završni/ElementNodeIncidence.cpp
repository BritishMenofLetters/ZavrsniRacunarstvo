#include "ElementNodeIncidence.h"

ElementNodeIncidence::ElementNodeIncidence() {

	m_sorted = false;
}

vector <vector<int> > ElementNodeIncidence::getMatrix() {
	return m_matrix;
}

vector<Node> ElementNodeIncidence::getNodes() {
	return m_nodes;
}

void ElementNodeIncidence::addElement(Resistor resistor) {
	m_elements.push_back(resistor);

	m_nodes.push_back(resistor.getNode_1());
	m_nodes.push_back(resistor.getNode_2());
}

void ElementNodeIncidence::sortNodes() {
	sort(m_nodes.begin(), m_nodes.end());

	m_nodes.erase(unique(m_nodes.begin(), m_nodes.end()), m_nodes.end());

	m_sorted = true;
}

void  ElementNodeIncidence::addMatrixElement(int element_index, Resistor resistor) {
	Node node_1 = resistor.getNode_1();
	Node node_2 = resistor.getNode_2();

	if (resistor.getOrientation() != Ascending)
		swap(node_1, node_2);

	m_matrix[element_index][node_1] = 1;
	m_matrix[element_index][node_2] = -1;
}

void ElementNodeIncidence::formMatrix() {
	if (!m_sorted)
		sortNodes();
	
	m_matrix.clear();
	m_matrix = vector<vector<int> >(m_elements.size(), vector<int>(m_nodes.size()));


	int element_index = 0;

	for (Resistor& element : m_elements)		
		addMatrixElement(element_index++, element);
}

void ElementNodeIncidence::printMatrix() {

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

