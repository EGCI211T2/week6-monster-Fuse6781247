#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main() {
    srand(time(0));
    Thanos T;
    int n;
    
    cout << "How many monsters? ";
    cin >> n;
    
    monster *m = new monster[n]; 

    for(int i = 0; i < n; i++) {
        string m_name;
        int m_hp, m_pot;
        cout << "Enter name, hp, potion for monster " << i+1 << ": ";
        cin >> m_name >> m_hp >> m_pot;
        m[i].set_all(m_name, m_hp, m_pot);
    }

    if (n >= 2) {
        cout << "\n--- Monsters start fighting! ---" << endl;
        m[n-1].Attack(m[0]); 
        if(n >= 3) m[1].Attack(m[2]); 
    }

    cout << "\n--- Thanos Timeline ---" << endl;
    for(int i = 0; i < 6; i++) ++T; 
    T.snap_finger(m, n); // SNAP!!

    cout << "\n=== Monsters remaining ===" << endl;
    for(int i = 0; i < n; i++) {
        m[i].display(); 
    }
    cout << "--------------------------" << endl;

    delete [] m; 
    return 0;
}