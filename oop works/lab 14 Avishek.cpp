#include <stdio.h>

#define MAX_VERTICES 10

// Function to initialize the graph with zero edges
void initializeGraph(int graph[MAX_VERTICES][MAX_VERTICES], int numVertices) {
    int i, j;
    for (i = 0; i < numVertices; ++i) {
        for (j = 0; j < numVertices; ++j) {
            graph[i][j] = 0;
        }
    }
}

// Function to add an edge to the graph
void addEdge(int graph[MAX_VERTICES][MAX_VERTICES], int numVertices, int source, int destination) {
    if (source >= 0 && source < numVertices && destination >= 0 && destination < numVertices) {
        graph[source][destination] = 1;
        graph[destination][source] = 1; // Assuming an undirected graph
    } else {
        printf("Invalid edge: (%d, %d)\n", source, destination);
    }
}

// Function to print the adjacency matrix representing the graph
void printGraph(int graph[MAX_VERTICES][MAX_VERTICES], int numVertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

// Objective: Implement a program to programmatically represent a graph using an adjacency matrix.
// Theory: In graph theory, a graph is a collection of nodes (vertices) and edges that connect pairs of nodes.
//          An adjacency matrix is a 2D array of size V x V, where V is the number of vertices in the graph.
//          The value graph[i][j] is 1 if there is an edge between vertex i and vertex j, and 0 otherwise.
//          This program initializes a graph, adds edges to it, and prints the adjacency matrix.
//          The adjacency matrix is symmetric for an undirected graph.
// Conclusion: The adjacency matrix representation is a simple and straightforward way to represent a graph.
//              It is efficient for dense graphs but may be memory-inefficient for sparse graphs.
//              The program provides functions to initialize the graph, add edges, and print the adjacency matrix.

int main() {
    int graph[MAX_VERTICES][MAX_VERTICES];
    int numVertices = 5; // Adjust the number of vertices as needed

    // Initialize the graph
    initializeGraph(graph, numVertices);

    // Add edges to the graph
    addEdge(graph, numVertices, 0, 1);
    addEdge(graph, numVertices, 0, 2);
    addEdge(graph, numVertices, 1, 3);
    addEdge(graph, numVertices, 2, 4);

    // Print the adjacency matrix
    printGraph(graph, numVertices);

    return 0;
}
