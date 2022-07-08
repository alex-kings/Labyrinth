// Labyrinth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

// A vertex
struct vertex {
	int id;
};

// An edge links two vertices
struct edge {
	int v1;
	int v2;
};

// Representation of a graph as a collection of vertices and edges.
class Graph {
public:
	vector<vertex> vertices;
	vector<edge> edges;

	// Constructor
	Graph() {}

	// Add a vertex to the list of vertices
	void addVertex(vertex v) {
		vertices.push_back(v);
	}

	void printVertices() {
		cout << "Vertices: \n";
		for (int i = 0; i < vertices.size(); i++) {
			cout << vertices.at(i).id << '\n';
		}
	}
};

int main()
{
	Graph g;
	
	for (int i = 0; i < 10; i++) {
		vertex v;
		v.id = i;
		g.addVertex(v);
	}

	g.printVertices();


}
