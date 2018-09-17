//
//  Tree.cpp
//  Tree
//
//  Created by neoman nouiouat on 11/14/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#include "Tree.h"

using namespace std;

template<class T> Tree<T>::Tree(){
    root=nullptr;
    size=0;
}

template<class T> void Tree<T>::insert(T data){
    size++;
    if(root==nullptr){
        Node<T>* use = new Node<T>(data);
        root=use;
        return;
    }
    insert(root,data);
}

template<class T> void Tree<T>::insert(Node<T>* start, T data){
    if (data>=start->getData()){
        if(start->getRight()==nullptr){
            Node<T>* use = new Node<T>(data);
            start->setRight(use);
            return;
        }
        else{
            insert(start->getRight(),data);
            return;
        }
    }
    else{
        if(start->getLeft()==nullptr){
            Node<T>* use = new Node<T>(data);
            start->setLeft(use);
            return;
        }
        else{
            insert(start->getLeft(),data);
        }
    }
}

template<class T> void Tree<T>::printAll(){
    
}

template<class T> void Tree<T>::remove(T data){
    root=remove(root,data);
}

template<class T> Node<T>* Tree<T>::getMax(Node<T>* start){
    if(start->getRight()==nullptr){
        return start;
    }
    else{
        return getMin(start->getRight());
    }
}

template<class T> Node<T>* Tree<T>::getMin(Node<T>* start){
    if(start->getLeft()==nullptr){
        return start;
    }
    else{
        return getMin(start->getLeft());
    }
}

template<class T> Node<T>* Tree<T>::remove(Node<T>* start,T data){
    if(start==nullptr){
        cout<<"Data "<<data<<" was not found in the binary tree. \n";
        return start;
    }
    if(data<start->getData()){
        start->setLeft(remove(start->getLeft(),data));
    }
    else if(data>start->getData()){
        start->setRight(remove(start->getRight(),data));
    }
    else{
        if(start->getLeft()==nullptr){
            Node<T>* temp=start->getRight();
            delete(start);
            size--;
            return temp;
        }
        else if(start->getRight()==nullptr){
            Node<T>* temp=start->getLeft();
            delete(start);
            size--;
            return temp;
        }
        Node<T>* temp=getMax(start->getLeft());
        start->setData(temp->getData());
        start->setLeft(remove(start->getLeft(),temp->getData()));
    }
    return start;
}

template<class T> void Tree<T>::removeAll(){
    removeAll(root);
}

template<class T> void Tree<T>::removeAll(Node<T>* start){
    if(start!=nullptr){
        removeAll(start->getLeft());
        removeAll(start->getRight());
        delete(start);
        size--;
        start=nullptr;
    }
}

template<class T> int Tree<T>::getSize(){
    return size;
}
template<class T> Tree<T>::~Tree(){
    removeAll();
}
