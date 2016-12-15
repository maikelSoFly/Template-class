//
//  Element.hpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#pragma once

template<int _amount , typename type>
class Element {
    
protected:
    
    int amount;
    type *T;
    
public:
    
    Element();
    Element(const Element &);
    ~Element();
    virtual void Print() const;
};

