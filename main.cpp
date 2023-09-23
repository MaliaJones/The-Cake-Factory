#include <iostream>
#include "Order.h"
using namespace std;

int main(){
    Order o {};
    cout << "Welcome to the Cake Bakery! Let's take your order." << endl;
    cout << "------------------------MENU----------------------------" << endl;
    cout << "CAKE FLAVORS: vanilla, chocolate, red velevet" << endl;
    cout << "FROSTING FAVLORS: vanilla, chocolate, red velvet" << endl;
    cout << "*Max teirs s | 2" << endl;
    cout << "           m | 3" << endl;
    cout << "           l | 5" << endl;
    cout << "--------------------------------------------------------" << endl;
    string cake_flavor {};
    string frosting_flavor {};
    char size;
    int teirs {1};
    int const maxts {2};
    int const maxtm {3};
    int const maxtl {5};
    
    
    cout << "What would you like for the cake flavor? ";
    getline(cin, cake_flavor);
    cout << "And the frosting flavor? ";
    getline(cin, frosting_flavor);
    cout << "What size for this cake? (large = l, medium = m, small = s) ";
    cin >> size;
    cout << "How many teirs would you like? " << endl;
    cin >> teirs;
    switch (size){
        case 'l':
        {
            if (teirs>maxtl){
                cout << "I'm sorry, we cannot make that. It exceeds the teir maximum for your cake's chosen size." << endl;
            }
        }
        break;
        case 'm':
        {
            if (teirs>maxtm){
                cout << "I'm sorry, we cannot make that. It exceeds the teir maximum for your cake's chosen size." << endl;
            }
        }
        break;
        case 's':
        {   
            if (teirs>maxts){
                cout << "I'm sorry, we cannot make that. It exceeds the teir maximum for your cake's chosen size." << endl;
            }
        }
        break;
        default:
            cout << "Cake size unclear." << endl;
    }

    
    
    cout << "Thanks! Working on your order...\nDone! Enjoy your cakes." << endl;
    cout << "----------------------------------------------------\n" << endl;
    o.build_cake(size, teirs, cake_flavor, frosting_flavor);
    
    
    
    
    return 0;
}
