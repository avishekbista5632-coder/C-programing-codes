#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// Structure to represent a subset for union-find
struct Subset {
    int parent;
    int rank;
};

// Function to find the set of an element using path compression
int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// Function to perform union of two sets using rank
void unionSets(struct Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// Function to compare two edges based on their weights
int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

// Function to construct the minimum spanning tree using Kruskal's algorithm
void kruskal(struct Edge edges[], int V, int E) {
    struct Edge result[V];
    int e = 0; // Index variable for result[]

    // Sort all the edges in non-decreasing order of their weight
    qsort(edges, E, sizeof(edges[0]), compare);

    // Allocate memory for creating V subsets
    struct Subset subsets[V];
    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    // Process all the edges sorted in non-decreasing order
    for (int i = 0; e < V - 1 && i < E; i++) {
        int x = find(subsets, edges[i].src);
        int y = find(subsets, edges[i].dest);

        if (x != y) {
            result[e++] = edges[i];
            unionSets(subsets, x, y);
        }
    }

    // Print the constructed minimum spanning tree
    printf("Edges in the Minimum Spanning Tree:\n");
    for (int i = 0; i < e; i++)
        printf("%d - %d: %d\n", result[i].src, result[i].dest, result[i].weight);
}

int main() {
    int V = 4; // Number of vertices
    int E = 5; // Number of edges
    struct Edge edges[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskal(edges, V, E);

    return 0;
}

