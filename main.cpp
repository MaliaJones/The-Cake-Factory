#include "Cake.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

void Cake::build_cake(){
    char frost;
    if (frost_type == "chocolate"){
        frost = 'x';
    } else if (frost_type == "red velvet"){
        frost = 'v';
    } else{
        // vanilla
        frost = 'o'; 
    }
    char base;
    if (cake_type == "chocolate"){
        base = 'X';
    } else if (cake_type == "red velvet"){
        base = 'V';
    } else{
        // vanilla
        base = 'O';
    }
    double multp {1};
    double spc {pow(2, tiers)/2};
    switch(size){
        case 'l':
        {
            multp = 20-pow(2, tiers);
            for (int t {tiers}; t>= 1; t--){
                for (int i = 0; i<2; i++){
                    cout << string(spc, ' ') << string(multp, frost) << endl;
                }
                for (int i = 0; i<2; i++){
                    cout << string(spc, ' ') << string(multp, base) << endl;
                }
                multp += 4;
                spc -= 2;
            }
        }
        break;
        case 'm':
        {
            multp = 10-pow(2, tiers);
            for (int t {tiers}; t>= 1; t--){
                for (int i = 0; i<2; i++){
                    cout << string(spc, ' ') << string(multp, frost) << endl;
                }
                for (int i = 0; i<2; i++){
                    cout << string(spc, ' ') << string(multp, base) << endl;
                }
                multp += 4;
                spc -= 2;
            }
        }
        break;
        default:
        // s
        {
            multp = 5-pow(2, tiers);
            for (int t {tiers}; t>= 1; t--){
                for (int i = 0; i<2; i++){
                    cout << string(spc, ' ') << string(multp, frost) << endl;
                }
                for (int i = 0; i<2; i++){
                    cout << string(spc, ' ') << string(multp, base) << endl;
                }
                multp += 4;
                spc -= 2;
            }
        }
    }
}
