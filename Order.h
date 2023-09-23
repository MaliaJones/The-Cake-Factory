#ifndef ORDER_H
#define ORDER_H
#include <vector>
#include <string>
#include <iostream>
#include "Cake.h"
using namespace std;

class Order{
    // attributes
private:
    vector<Cake> order;
    friend class Cake;

public:
    // constructor(s)
    Order(vector<Cake> v = {})
        : order{v} {
    }
    
    // methods
    void build_cake(char s, int t, string ct, string ft);

    
    
};

#endif // ORDER_H
