#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
          void heal();
	monster(string= " fuse ", int=1,int=1);
	~monster();
	void display();

};
monster::~monster(){
	cout<<name<< "is gone."<<endl;
}

monster::monster(string n, int h, int p ){
	name = n;
	hp = h;
	potion = p;
	cout<<"Monster"<<name<<"is here"<<endl;
	

}

void monster::display(){
 cout<<"Name : "<<name<<endl;
 cout<<"Hp : "<<hp<<endl;
 cout<<"Potion : "<<potion<<endl;

}

#endif
