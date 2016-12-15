//
//  Element.cpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#include "Element.hpp"
#include <iostream>

using namespace std;

template<int _amount, typename type>
Element<_amount, type>::Element() {
    
    amount = _amount;
    T = new type[amount];
}

template<int _amount, typename type>
Element<_amount, type>::Element(const Element & element) {
    
    amount = element.amount;
    T = new type[amount];
    
    for (int i = 0; i < amount; i++) {
        for (int j = 0; j < 3; j++)
            T[i].Variables[j] = element.T[i].Variables[j];
    }
}

template<int _amount, typename type>
Element<_amount, type>::~Element() { }

template<int _amount, typename type>
void Element<_amount, type>::Print() const {
    
    for (int i = 0; i < amount; i++) {
        cout << i << ".\ncord: ";
        T[i].Print();
    }
}




