#ifndef CAKE_H
#define CAKE_H
#include <string>
using namespace std;

class Cake{
    // attributes
private:
    char size;
    int tiers;
    string cake_type;
    string frost_type;
    
public:
    // constructor(s)
    Cake(char s = 's', int t = 1, string ct = "vanilla", string ft = "stars")
        : size{s}, tiers{t}, cake_type{ct}, frost_type{ft} {
    }
    
    // methods
    void build_cake();
    
    
    
    
    
};

#endif // CAKE_H
