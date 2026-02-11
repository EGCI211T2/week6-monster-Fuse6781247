#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

    monster A(" LeBron ",10,1);
    monster B(" Kyrie ");
    monster*p;// No construtor is called

    //monster x[5]={{" Micheal "}, {" Peter ", 20}, {" Garnet "}, {" Stephen "}, {" Sam "}};
    monster c;
    p=&c;
    p->display();
    p=&A;
    p->display();
    p=new monster(" Sabrina ",20);
    p->display();
    delete p;

    p=new monster[3];
    delete [] p;
  /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

}
