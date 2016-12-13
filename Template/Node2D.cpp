//
//  Node2D.cpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#include "Node2D.hpp"
#include <iostream>

using namespace std;

Node2D::Node2D() {
    
    y = (rand() % 10) * 0.1;
}

Node2D::Node2D(const Node2D & node) {
    
    y = node.y;
}

Node2D::~Node2D() { }

void Node2D::Print() const {
    
    cout << "x: " << x << " y: " << y << endl;
    
    for (int i = 0; i < 3; i++) {
        
        switch (i) {
            case 0:
                cout << "strain: ";
                break;
            case 1:
                cout << "strain_rate: ";
                break;
            case 2:
                cout << "temp: ";
                break;
                
            default:
                break;
        }
        
        cout << Variables[i] << endl;
    }
    
    cout << "Średnia: " << Average() << endl;
}
