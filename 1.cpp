#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
class Graph {
private:
    vector<vector<int>> adjacencyList;
    int node;
public:
    Graph(int vertices) {
        adjacencyList.resize(vertices+1); // Vertices are numbered from 1 to N
        node = vertices;
    }

    void addEdge(int source, int destination) {
        adjacencyList[source].push_back(destination);
        adjacencyList[destination].push_back(source);
    }

    void display() {
        for (int i = 0; i < adjacencyList.size(); ++i) {
            cout << i << " -> ";
            for (int j = 0; j < adjacencyList[i].size(); ++j) {
                cout << adjacencyList[i][j];
                if (j != adjacencyList[i].size() - 1) {
                    cout << ",";
                }
            }
            cout << endl;
        }
    }

    void DFS(int startVertex) {
        vector<int> visited(node +1,false);
        cout << "Depth-First Search (DFS): ";
        DFSRecursive(startVertex,visited);
        cout << endl;
    }

    void DFSRecursive(int vertex,vector<int> &visited) {
        visited[vertex] = true;
        cout << vertex << " ";

        for (int neighbor : adjacencyList[vertex]) {
            if (!visited[neighbor]) {
                DFSRecursive(neighbor,visited);
            }
        }
    }
void BFS(int startVertex) {
    cout << "Breadth-First Search (BFS): ";
    queue<int> bfsQueue;
    bfsQueue.push(startVertex);
    vector<int> visited(node +1,false);
    visited[startVertex] = true;

    while (!bfsQueue.empty()) {
        int vertex = bfsQueue.front();
        bfsQueue.pop();
        cout << vertex << " ";

        for (int neighbor : adjacencyList[vertex]) {
            if (!visited[neighbor]) {
                bfsQueue.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    cout << endl;
}

};

int main() {
    int vertices, edges;

    cout << "Enter the number of vertices: ";
    cin >> vertices;

    Graph graph(vertices);

    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the edges in the format (source destination):\n";
    for (int i = 0; i < edges; ++i) {
        int source, destination;
        cin >> source >> destination;
        graph.addEdge(source, destination);
    }

    int startVertex;
    cout << "Enter the starting vertex for DFS and BFS: ";
    cin >> startVertex;

    graph.display();
    graph.DFS(startVertex);
    graph.BFS(startVertex);

    return 0;
}
