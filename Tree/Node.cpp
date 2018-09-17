//
//  Node.cpp
//  Tree
//
//  Created by neoman nouiouat on 11/14/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#include "Node.h"

using namespace std;

template<class T> Node<T>::Node(T dat){
    data=dat;
    left=nullptr;
    right=nullptr;
    
}

template<class T> Node<T>* Node<T>::getRight(){
    return right;
}

template<class T> Node<T>* Node<T>::getLeft(){
    return left;
}

template<class T> void Node<T>::setRight(Node<T>* rig){
    right=rig;
    
}

template<class T> void Node<T>::setLeft(Node<T>* lef){
    left=lef;
}

template<class T> T Node<T>::getData(){
    return data;
}

template<class T> void Node<T>::setData(T dat){
    data=dat;
}
