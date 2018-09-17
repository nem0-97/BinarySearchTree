//
//  Tree.h
//  Tree
//
//  Created by neoman nouiouat on 11/14/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#ifndef Tree_h
#define Tree_h
#include "Node.h"
template<class T> class Tree{
private:
    int size;
    Node<T>* root;
    
public:
    Tree();
    void insert(T data);
    void insert(Node<T>* start, T data);
    void printAll();
    void remove(T data);
    Node<T>* remove(Node<T>* start, T data);
    void removeAll();
    void removeAll(Node<T>* start);
    Node<T>* getMin(Node<T>* start);
    Node<T>* getMax(Node<T>* start);
    int getSize();
    ~Tree();
    
    
};

#endif /* Tree_h */
