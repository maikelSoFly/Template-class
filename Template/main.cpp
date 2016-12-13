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

int main() {
    
    srand(time(NULL));
    
    Element<2, Node1D> a;
    Element<3, Node2D> b;
    Element<4, Node3D> c;
    Element<8, Node3D> d;
    
    Element2DTri e;
    Element3DOct f;
    
    a.Print();
    cout << "\n\n";
    b.Print();
    cout << "\n\n";
    c.Print();
    cout << "\n\n";
    d.Print();
    cout << "\n\n\n[Element2DTri]:\n\n";
    e.Print();
    cout << "\n\n[Element3DOct]:\n\n";
    f.Print();
    cout << "\n\n";
    
    return 0;
}

