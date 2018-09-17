//
//  Node.h
//  Tree
//
//  Created by neoman nouiouat on 11/14/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#ifndef Node_h
#define Node_h
#include<iostream>

template<class T> class Node{
private:
    Node<T>* left;
    T data;
    Node<T>* right;
    
public:
    Node(T dat);
    Node<T>* getLeft();
    Node<T>* getRight();
    void setLeft(Node<T>* lef);
    void setRight(Node<T>* rig);
    T getData();
    void setData(T dat);
};

#endif /* Node_h */
