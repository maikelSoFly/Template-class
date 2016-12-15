//
//  Node3D.cpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#include "Node3D.hpp"
#include <iostream>

using namespace std;

Node3D::Node3D() {
    
    z = (rand() % 10) * 0.1;
}

Node3D::Node3D(const Node3D & node) {
    
    z = node.z;
}

Node3D::~Node3D() { }

void Node3D::Print() const {
    
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
    
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
