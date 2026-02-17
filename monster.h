#ifndef monster_h
#define monster_h
#include <iostream>
#include <string> // เพิ่มเพื่อให้ใช้ string ได้ไม่ error
using namespace std;

class monster{
private:
    string name;
    int hp,potion;
public:
    void Attack(monster &);
    void heal();
    monster(string =" fuse ", int=10,int=1); // ปรับ default HP เป็น 10 ไม่ให้เป็น 0
    ~monster();
    monster(int, int);
    
    void display();
    bool operator>(monster &x);
    
    void operator+=(int);//Binary
    void operator+=(monster &);//Binary
    void operator--();//UNay opearator

    // ส่วนที่เพิ่มเพื่อให้ Thanos สั่งตายได้
    void die() { hp = 0; }
};

bool monster::operator>(monster &x){
    if(hp > x.hp ) return true;
    else return false;
}

void monster::operator+=(int a){
    this ->hp+=a;
}

void monster::operator+=(monster &x){
    this->hp+=x.hp;
    x.hp=0;
}

void monster::operator--(){
    if(hp > 0) --hp;
}

monster::~monster(){
    cout<<name<< "is gone."<<endl;
}

monster::monster(int h, int p){
    hp=h;
    potion=p;
    name="Inwza Supa Monsta";
}

monster::monster(string n, int h, int p ){
    name = n;
    hp = h;
    potion = p;
    cout<<"Monster"<<name<<"is here"<<endl;
}

void monster::display(){
    // เงื่อนไข: ถ้า hp=0 จะไม่ display ตามโจทย์
    if(hp > 0) {
        cout<<"Name : "<<name<<endl;
        cout<<"Hp : "<<hp<<endl;
        cout<<"Potion : "<<potion<<endl;
    }
}
#endif