//
//  Node3D.hpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#pragma once

#include "Node2D.hpp"

class Node3D : public Node2D {
protected:
    
    double z;
    
public:
    
    Node3D();
    Node3D(const Node3D &);
    ~Node3D();
    virtual void Print() const;
};

