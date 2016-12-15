//
//  main.cpp
//  Template
//
//  Created by Mikołaj Stępniewski on 13.12.2016.
//  Copyright © 2016 Mikołaj Stępniewski. All rights reserved.
//

#include <ctime>
#include "Node1D.hpp"
#include "Node3D.hpp"
#include "Node2D.hpp"
#include "Element.hpp"
#include "Element.cpp"

typedef Element<3, Node2D> Element2DTri;
typedef Element<8, Node3D> Element3DOct;

template<int _amount, typename type>
std::ostream& operator<< (std::ostream&, const Element<_amount, type>&);


int main() {
    
    srand(static_cast<unsigned int>(time(NULL)));
    
    Element<2, Node1D> a;
    Element<3, Node2D> b;
    Element<4, Node3D> c;
    Element<8, Node3D> d;
    
    Element2DTri e;
    Element3DOct f;

    cout << a << "\n\n";
    cout << b << "\n\n";
    cout << c << "\n\n";
    cout << d << "\n\n\n[Element2DTri]:\n\n";
    cout << e << "\n\n[Element3DOct]:\n\n";
    cout << f << "\n\n\n";
    
    return 0;
}

template<int _amount, typename type>
std::ostream& operator<< (std::ostream& out, const Element<_amount, type>& classObj) {
    classObj.Print();
    return out;
}

