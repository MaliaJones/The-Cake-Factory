#include "Order.h"
#include <iostream>
#include <string>

void Order::build_cake(char s, int t, string ct, string ft){
    Cake c {s, t, ct, ft};
    c.build_cake();
    order.push_back(c);
}
