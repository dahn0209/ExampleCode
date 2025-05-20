# Makefile for Graphs
CC = gcc
CFLAGS = -Wall

SHARED_SRCS = 

ADJ_MATRIX_TARGET = matrixTest.out
ADJ_MATRIX_SRCS = 

ADJ_LIST_TARGET = listTest.out
ADJ_LIST_SRCS = 

TRAVERSAL_TARGET = traversalTest.out
TRAVERSAL_SRCS = 

all: amatrix alist traversal

amatrix: $(ADJ_MATRIX_TARGET)

$(ADJ_MATRIX_TARGET): $(ADJ_MATRIX_SRCS)
	$(CC) $(CFLAGS) -o $(ADJ_MATRIX_TARGET) $(ADJ_MATRIX_SRCS) $(SHARED_SRCS)

alist: $(ADJ_LIST_TARGET)

$(ADJ_LIST_TARGET): $(ADJ_LIST_SRCS)
	$(CC) $(CFLAGS) -o $(ADJ_LIST_TARGET) $(ADJ_LIST_SRCS) $(SHARED_SRCS)

traversal: $(TRAVERSAL_TARGET)

$(TRAVERSAL_TARGET): $(TRAVERSAL_SRCS)
	$(CC) $(CFLAGS) -o $(TRAVERSAL_TARGET) $(TRAVERSAL_SRCS) $(SHARED_SRCS)

clean:
	rm -f *.out
