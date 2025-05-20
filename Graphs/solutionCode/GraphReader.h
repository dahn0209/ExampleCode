#ifndef GRAPH_READER_H
#define GRAPH_READER_H

/* 
 * GraphReader.h
 * Header file for reading graph data from files
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Structure to hold the file pointer and current line data
typedef struct GraphReader {
    FILE* file;
    int* currentLine;
} GraphReader;

// Initialize a new GraphReader with the given filename
// Returns NULL if the file cannot be opened
GraphReader* reader_open(const char* filename);

// Read the next line from the graph file
// Returns an array of 3 integers or NULL if end of file or error
int* reader_next(GraphReader* reader);

// Close the GraphReader and free allocated memory
void reader_close(GraphReader* reader);

#endif /* GRAPH_READER_H */