//
//  main.cpp
//  Tree
//
//  Created by neoman nouiouat on 11/14/17.
//  Copyright © 2017 neoman. All rights reserved.
//

#include <iostream>
#include "Node.cpp"
#include "Tree.cpp"

int main(int argc, const char * argv[]) {
    Tree<int> test;
    for(int i=0; i<5;i++){
        test.insert(i);
    }
    test.remove(99);
    test.remove(99);
    test.remove(1);
    test.remove(1);
    test.removeAll();
    return 0;
}
