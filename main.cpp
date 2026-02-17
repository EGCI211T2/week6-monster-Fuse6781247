#include <iostream>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main(int argc, char* argv[]) {

    monster A(" LeBron ",10,1);
    monster B(" Kyrie ");
    monster*p;// No construtor is called
    B+=10;//B.operator+=(10);
    --A;// A.operator--();

    cout<<"===The stronger Monster is===\n";
    if(A>B) {
      A.display(); //A>B-->A--B>A.operator>()
    }
    else{
      B.display();
    }

    /* // delete it here 

    B.display();
    //monster x[5]={{" Micheal "}, {" Peter ", 20}, {" Garnet "}, {" Stephen "}, {" Sam "}};
    monster c;
    p=&c;
    p->display();
    p=&A;
    p->display();
    p = new monster(" Sabrina ",20);
    p->display();
    delete p;

    p = new monster[3];
    delete [] p;
    p = new monster(50,2);
    p->display();
    delete p;

   /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

    // ==========================================
    // START OF NEW TASK (Thanos Section)
    // ==========================================
    
    Thanos T;
    int n;
    cout << "How many monsters? ";
    cin >> n;
    monster *m = new monster[n]; // make sure they have hp

    /* Add some story */
    ++T;
    ++T;
    T.snap_finger(m,n);
    
    ++T;
    ++T;
    T.snap_finger(m,n);
    
    ++T;
    ++T;
    T.snap_finger(m,n); // Clear hp n/2 (half) of the monster because stones reach 6
    
    int i;
    for(i=0; i<n; i++)
        m[i].display(); // If the hp=0, you do not display -> you will see only n/2 monster
    
    delete [] m;

    return 0;
}