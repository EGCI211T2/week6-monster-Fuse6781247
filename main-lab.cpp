#include <iostream>
#include <cstdlib> 
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {
    
    if (argc < 4) {
        cout << "Usage: ./lab <name> <hp> <potion> [enemy_name enemy_hp enemy_potion]..." << endl;
        return 1;
    }

    
    monster YOU(argv[1], atoi(argv[2]), atoi(argv[3]));

   
    int i;
    for(i = 4; i + 2 < argc; i += 3) {
        
        monster *p = new monster(argv[i], atoi(argv[i+1]), atoi(argv[i+2]));
        
        cout << "\n--- Fighting against " << argv[i] << " ---" << endl;

        if(YOU > *p) { 
            cout << "You win this round!" << endl;
            YOU += *p; 
        } else {
            cout << "You are losing! Thanos snap triggered!" << endl;
            --YOU; 
        }

        delete p;
        YOU.heal(); 
    }
    
    cout << "\n=== FINAL STATS ===" << endl;
    YOU.display();

    return 0;
}