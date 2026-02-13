#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
          void heal();
	monster(string =" fuse ", int=1,int=1);
	~monster();
	 monster(int, int);
	
	 void display();
	bool operator>(monster &x);
	
	void operator+=(int);//Binary
	void operator+=(monster &);//Binary
	void operator--();//UNay opearator
	
	


 };


   bool monster::operator>(monster &x){
if(hp > x.hp )
 {
  return true;
 }

else 
{
  return false;
}
   }
   

   	void monster::operator+=(int a){
		this ->hp+=a;
		//potion++;
	}

	void monster::operator+=(monster &x){
		this->hp+=x.hp;
		x.hp=0;
	}
	
	void monster::operator--(){
		
		--hp;
		//
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
 cout<<"Name : "<<name<<endl;
 cout<<"Hp : "<<hp<<endl;
 cout<<"Potion : "<<potion<<endl;

}

#endif
