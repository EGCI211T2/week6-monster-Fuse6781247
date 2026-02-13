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

}
