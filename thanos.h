#ifndef thanos_h
#define thanos_h
#include "monster.h"

class Thanos { 
private:
    int stones;
    int hp;
public:
    Thanos(int s=0, int h=1000) : stones(s), hp(h) {}
    ~Thanos() {
        cout << "Thanos is gone." << endl;
    }

    void snap_finger(monster m[], int n) {
        if(stones >= 6) {
            cout << ">>> SNAP! Half of the monsters disappear... <<<" << endl;
            for(int i = 0; i < n/2; i++) {
                m[i].die(); 
            }
        } else {
            cout << "Not enough stones. Current stones: " << stones << endl;
        }
    }

    void operator++() { 
        stones++;
    }
}; 
#endif