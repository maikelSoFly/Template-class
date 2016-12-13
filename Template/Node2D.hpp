//
//  Node2D.hpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#pragma once

#include "Node1D.hpp"

class Node2D : public Node1D {
protected:
    
    double y;
    
public:
    
    Node2D();
    Node2D(const Node2D &);
    ~Node2D();
    virtual void Print() const;
};

