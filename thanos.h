#ifndef Thanos_h
#define Thanos_h

#include "monster.h"
#include <iostream>
using namespace std;

class Thanos {
private:
    int stones;
    int hp;
public:
    Thanos(int s = 0, int h = 1000) : stones(s), hp(h) {
        cout << "Thanos is here with " << stones << " stones." << endl;
    }
    ~Thanos() {
        cout << "Thanos is gone." << endl;
    }

    void operator++() {
        stones++;
        cout << "Thanos got a new stone! Total: " << stones << endl;
    }

    void snap_finger(monster m[], int n) {
        if (stones < 6) {
            cout << "Not enough stones. Current stones: " << stones << endl;
        } else {
            cout << ">>> SNAP! Half of the monsters disappear... <<<" << endl;
            for (int i = n / 2; i < n; i++) {
                m[i].operator--();
            }
        }
    }
};

#endif