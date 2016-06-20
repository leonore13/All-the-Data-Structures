//
//  datastructtypes.h
//  All the Data Structures
//
//  Created by Sophia Nguyen on 2016-06-19.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#ifndef datastructtypes_h
#define datastructtypes_h

#include <string>
using namespace std;

// Classes used for implementing a stack data structure
class Stack
{
private:
    int arr_size; // Maximum size of the dynamic array
    int* arr;     // Pointer to the dynamic array
    int top;      // Index number to keep track of top of the stack
    
public:
    // Default constructor
    Stack();
    
    // Parametized constructor
    Stack(int size);
    
    // Destructor
    ~Stack();
    
    // Inserts an int on top of the stack
    // PARAM: x is the value to be inserted
    void Push(int x);
    
    // Removes and returns an item at the top of the stack
    // Return -1 if the stack is empty
    int Pop();
    
    // Returns the item at the top of the stack
    // Returns -1 if stack is empty
    int Peek() const;
    
    // Returns size of the stack
    int get_Top();
};

// Classes used for implementing a graph data structure
template <typename T>
class Neighbour
{
public:
    int vNum;
    Neighbour<T>* next;
    
    // paramaterized constructor
    Neighbour() {
        vNum = 0;
        next = NULL;
    }
};;

template <typename T>
class Vertex {
private:
    string name;
    Neighbour<T>* adjList;
    
public:
    // default constructor
    Vertex(string data) {
        name = data;
        adjList = NULL;
    }
    
};

#include "graph.cpp"
#include "stack.cpp"

#endif /* datastructtypes_h */
