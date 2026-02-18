#ifndef monster_h
#define monster_h

#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

class monster {
private:
    string name;
    int hp, potion;
public:
    // Constructor:
    monster(string n = " fuse ", int h = 1, int p = 1) : name(n), hp(h), potion(p) {}
    ~monster() {
        cout << name << " is gone." << endl;
    }

    void set_all(string n, int h, int p) {
        name = n; hp = h; potion = p;
    }

    
    void Attack(monster &target) {
        if (hp > 0 && target.hp > 0) {
            cout << name << " attacks " << target.name << "!" << endl;
            target.hp -= 20; 
            if (target.hp <= 0) {
                target.hp = 0;
                cout << target.name << " has been defeated!" << endl;
            }
        } else {
            cout << "Cannot attack! One of them is already out." << endl;
        }
    }

    void heal() {
        if (hp > 0) {
            potion++;
            hp += 10;
            cout << name << " used heal! (HP +10)" << endl;
        }
    }

    void display() {
        if (hp > 0) { 
            cout << "Name : " << name << " | HP : " << hp << " | Potion : " << potion << endl;
        }
    }

    void operator--() { 
        if (rand() % 2 == 0) { 
            hp = 0;
            cout << name << " : ...I don't feel so good. (HP becomes 0)" << endl;
        } else {
            cout << name << " : survived the snap!" << endl;
        }
    }

    friend class Thanos; 
};

#endif