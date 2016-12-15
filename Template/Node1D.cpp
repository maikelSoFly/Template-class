//
//  Node1D.cpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#include "Node1D.hpp"
#include <iostream>
#include <ctime>

using namespace std;

Node1D::Node1D() {
    
    x = (rand() % 10) * 0.1;
    Variables[0] = (rand() % 10) * 0.1;
    Variables[1] = (rand() % 110 + 10) * 0.1 ;
    Variables[2] = (rand() % 4000 + 8001) * 0.1;
}

Node1D::Node1D(const Node1D & node) {
    
    x = node.x;
    Variables[0] = node.Variables[0];
    Variables[1] = node.Variables[1];
    Variables[2] = node.Variables[2];
}

Node1D::~Node1D() { }

void Node1D::Print() const
{
    cout << "x: " << x << endl;
    
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

double Node1D::Average() const {
    
    return (Variables[0] + Variables[1] + Variables[2]) / 3;
}

