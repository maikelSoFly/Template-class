//
//  Node1D.hpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#pragma once

class Node1D {
    
protected:
    
    double x;
    double Variables[3];
    
public:
    
    Node1D();
    Node1D(const Node1D &);
    ~Node1D();
    virtual void Print() const;
    double Average() const;
};

