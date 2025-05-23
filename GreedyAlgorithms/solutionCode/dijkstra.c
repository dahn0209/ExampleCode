
/** Solution Code for Dijkstra's Shortest Path Algorithm Code Along
*/

#include <stdio.h>
#include <stdlib.h>

#include "dijkstra.h"

/**
 * Implements Dijkstra's algorithm to find the shortest path from a source vertex to all other vertices.
 * @param graph The adjacency list representation of the graph.
 * @param src The source vertex.
 * @param dist Output array to store the shortest distance from source to each vertex.
 * @param prev Output array to store the previous node in the optimal path.
 */
void dijkstra(AdjListGraph* graph, int src, int* dist, int* prev) {
    //TODO: Implement
}

/**
 * Prints the shortest path from source to a given vertex.
 * @param src The source vertex.
 * @param dest The destination vertex.
 * @param prev Array containing the previous node information.
 * @param V The maximum number of vertices in the graph.
 */
void printPath(int dest, int* prev, int V) {
    // Create a temporary array to store the path
    int path[V]; // Assumes at most 100 vertices in path
    int pathLength = 0;

    // First, collect the path in reverse order
    for (int v = dest; v != -1; v = prev[v]) {
        path[pathLength++] = v;
    }

    // Then print the path in correct order (source to destination)
    for (int i = pathLength - 1; i >= 0; i--) {
        printf("%d", path[i]);
        if (i != 0) {
            printf(" -> ");
        }
    }
    printf("\n");
}

/**
 * Prints the distance array showing shortest distances from source to all vertices.
 * @param dist Array containing shortest distances.
 * @param V The number of vertices.
 */
void printSolution(int* dist, int V) {
    printf("Shortest Path from Source to Destination:\n");
    for (int i = 0; i < V; i++) {
        if (dist[i] != INT_MAX) {
            printf("Shortest path to vertex %d is %d\n", i, dist[i]);
        } else {
            printf("Vertex %d is unreachable from source\n", i);
        }
    }
    printf("\n");
}