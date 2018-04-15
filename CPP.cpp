#include "Planet.h"
#include "Jedi.h"
#include "Stormtrooper.h"
#include "Galaxy.h"
#include "Army.h"
#include "JediTemple.h"
#pragma once
using namespace std;
void Planet :: copy(const Planet &other)
{
  this->name=new char[strlen(other.name)+1];
  strcpy(this->name,other.name);
  this->planetSystem=new char[strlen(other.planetSystem)+1];
  strcpy(this->planetSystem,ohter.planetSystem);
  this->republic=new char[strlen(other.republic)+1];
  strcpy(this->republic,other.republic);
}
void Planet :: destroy()
{
  delete [] this->name;
  delete [] this->planetSystem;
  delete [] this->republic;
}
Planet :: Planet()
{ 
  name=NULL;
  systemPlanet=NULL;
  republic=NULL;
}
Planet :: Planet(char* name,char* planetSystem,char* republic)
{
  this->name=new char[strlen(name)+1];
  strcpy(this->name,name);
  this->planetSystem=new char[strlen(planetSystem)+1];
  strcpy(this->planetSystem,planetSystem);
  this->republic=new char[strlen(republic)+1];
  strcpy(this->republic,republic);
}
Planet :: Planet(const Planet &other)
{
  copy(other)
}
Planet& Planet :: operator =(const Planet &other)
{
  if(this!=&other)
  {
    destroy();
    copy(other);
  }
    return *this;
}
Planet :: ~Planet()
{
  destroy()
}
const char* Planet:: getName() const
{
  return this->name;
}
const char* Planet :: getPlanetSystem() const
{
  return this->planetSystem;
}
const char* Planet :: getRepublic() const
{
 return this->republic;
}
void Planet :: setName(const char* name)
{
  delete [] this->name;
  this->name=new char[strlen(name)+1];
  strcpy(this->name,name);
}
void Planet :: setPlanetSystem(const char* planetSystem)
{ 
  delete [] this->planetSystem;
  this->planetSystem=new char[strlen(planetSystem)+1];
  strcpy(this->planetSystem,planetSystem);
}
void Planet :: setRepublic(const char* republic)
{
  delete [] this->republic;
  this->republic=new char[strlen(republic)+1];
  strcpy(this->republic,republic);
}
ostream &operator <<(ostream &output,Planet &p1)
{ 
  output<<p1.name<<endl;
  output<<p1.planetSystem<<endl;
  output<<p1.republic<<endl;
  return output;
}
istream &operator >>(istream &input,Planet &p1)
{
  delete [] p1.name;
  delete [] p1.planetSystem;
  delete [] p1.republic;
  char* buffer=new char[SIZE];
  input.getline(buffer,SIZE);
  p1.name=new char[strlen(buffer)+1];
  strcpy(p1.name,buffer);
  input.getline(buffer,SIZE);
  p1.planetSystem=new char[strlen(buffer)+1];
  strcpy(p1.planetSystem,buffer);
  input.getline(buffer,SIZE);
  p1.republic=new char[strlen(republic)+1];
  strcpy(p1.republic,buffer);
  delete [] buffer;
  return input;
 }

   void Jedi :: copy(const Jedi &other)
  {
	this->name=new char[strlen(other.name)+1];
	strcpy(this->name,other.name);
	this->rank=new char[strlen(other.rank)+1];
	strcpy(this->rank,other.rank);
	this->species=new char[strlen(other.species)+1];
	strcpy(this->species,other.species);
	this->militaryRank=new char[strlen(other.militaryRank)+1];
	strcpy(this->militaryRank,other.militaryRank);
	this->midi-chlorian=other.midi-chlorian;
        this->planet=other.planet;
	
  }
 void Jedi :: destroy()
  {
	delete []this->name;
	delete []this->rank;
	delete []this->species;
	delete []this->militaryRank;
  }
 Jedi :: Jedi()
 {
	this->name=NULL;
	this->rank=NULL;
	this->species=NULL;
	this->militaryRank=NULL;
	midi-chlorian=0;
        this->planet=defaultPlanet;
 }
 Jedi :: Jedi(char* name,char* rank,char* species,char* militaryRank,double midi-chlorian,Planet planet)
 {
	this->name=new char[strlen(name)+1];
	strcpy(this->name,name);
	this->rank=new char[strlen(rank)+1];
	strcpy(this->rank,rank);
	this->species=new char[strlen(species)+1];
	strcpy(this->species,species);
	this->militaryRank=new char[strlen(militaryRank)+1];
	strcpy(this->militaryRank,militaryRank);
	this->midi-chlorian=other.midi-chlorian;
        this->planet=planet;
}
Jedi :: Jedi(const Jedi &other)
{
	copy(other);
}
Jedi& Jedi :: operator = (const Jedi &other)
{
	if(this!=&other)
	{
		destroy();
		copy(other);
	}
	return *this;
} 
Jedi ::~Jedi()
{
	destroy();
}
const char* Jedi :: getName()const
{
	return this->name;
}
const char* Jedi :: getRank()const
{
	return this->rank;
}
const char* Jedi :: getSpecies()const
{
	return this->species;
}
const char* Jedi :: getMilitaryRank()const
{
	return this->militaryRank;
}
double Jedi :: getMidiChlorian()const
{
	return this->midi-chlorian;
}
Planet Jedi :: getPlanet()const
{
  return this->planet;
}
void Jedi :: setName(const char* name)
{
	delete []this->name;
	this->name=new char[strlen(name)+1];
	strcpy(this->name,name);
}
void Jedi :: setRank(const char* rank)
{
	delete []this->rank;
	this->rank=new char[strlen(rank)+1];
	strcpy(this->rank,rank);
}
void Jedi :: setSpecies(const char* species)
{
	delete []this->species;
	this->species=new char[strlen(species)+1];
	strcpy(this->species,species);
}
void Jedi :: setMilitaryRank(const char* militaryRank)
{
	delete []this->militaryRank;
	this->militaryRank=new char[strlen(militaryRank)+1];
	strcpy(this->militaryRank,militaryRank);
}
void Jedi :: setMidiChlorian(double midi-chlorian)
{
	this->midi-chlorian=midi-chlorian;
}
void Jedi :: setPlanet(Planet planet)
{
   this->planet=planet;
}
ostream &operator <<(ostream &output,Jedi &j1)
{
	output<<j1.name;
	output<<j1.rank;
	output<<j1.species;
	output<<j1.militaryRank;
	output<<j1.midi-chlorian;
        output<<j1.planet;
	return output;
}
istream &operator >>(istream &input,Jedi &j1)
{
	delete [] j1.name;
	delete [] j1.rank;
	delete [] j1.species;
	delete [] j1.militaryRank;
	
	char* buffer=new char[SIZE];
	input.getline(buffer,SIZE);
	j1.name=new char[strlen(buffer)+1];
	strcpy(p1.name,buffer);
	input.getline(buffer,SIZE);
	j1.rank=new char[strlen(buffer)+1];
	strcpy(p1.rank,buffer);
	input.getline(buffer,SIZE);
	j1.species=new char[strlen(buffer)+1];
	strcpy(p1.species,buffer);
	input.getline(buffer,SIZE);
	j1.militaryRank=new char[strlen(buffer)+1];
	strcpy(p1.militaryRank,buffer);
	input>>j1.midi-chlorian;
        input>>j1.planet;
	delete []buffer;
	return input;
}

 void Stormtrooper :: copy(const Stormtrooper &other)
  {
	this->id=new char[strlen(other.id)+1];
	strcpy(this->id,other.id);
	this->rank=new char[strlen(other.rank)+1];
	strcpy(this->rank,other.rank);
	this->type=new char[strlen(other.type)+1];
	strcpy(this->type,other.type);
        this->planet=other.planet;
	
  }
 void Stormtrooper :: destroy()
  {
	delete []this->id;
	delete []this->rank;
	delete []this->type;
	
  }
 Stormtrooper :: Stormtooper()
 {
	this->id=NULL;
	this->rank=NULL;
	this->type=NULL;
	this->planet=defaultPlanet;
 }
 Stromtrooper :: Stormtrooper(char* id,char* rank,char* type,Planet planet)
 {
	this->id=new char[strlen(id)+1];
	strcpy(this->id,id);
	this->rank=new char[strlen(rank)+1];
	strcpy(this->rank,rank);
	this->type=new char[strlen(type)+1];
	strcpy(this->type,type);
        this->planet=planet;
}
Stormtrooper :: Stormtrooper(const Stormtrooper &other)
{
	copy(other);
}
Stormtrooper& Stormtrooper :: operator = (const Stormtrooper &other)
{
	if(this!=&other)
	{
		destroy();
		copy(other);
	}
	return *this;
} 
Stormtrooper ::~Stormtrooper()
{
	destroy();
}
const char* Stormtrooper :: getId()const
{
	return this->id;
}
const char* Stormtrooper :: getRank()const
{
	return this->rank;
}
const char* Stormtrooper :: getType()const
{
	return this->type;
}
Planet Stormtrooper :: getPlanet()const
{
	return this->planet;
}
void Stormtrooper :: setId(const char* name)
{
	delete []this->id;
	this->id=new char[strlen(id)+1];
	strcpy(this->id,id);
}
void Stormtrooper :: setRank(const char* rank)
{
	delete []this->rank;
	this->rank=new char[strlen(rank)+1];
	strcpy(this->rank,rank);
}
void Stormtrooper :: setType(const char* type)
{
	delete []this->type;
	this->type=new char[strlen(type)+1];
	strcpy(this->type,type);
}
void Stormtrooper:: setPlanet(Planet planet)
{
	delete []this->planet;
	this->planet=new char[strlen(planet)+1];
	strcpy(this->planet,planet);
}

ostream &operator <<(ostream &output,Jedi &st1)
{
	output<<st1.id
	output<<st1.rank;
	output<<st1.type;
	output<<st1.planet;
	return output;
}
istream &operator >>(istream &input,Jedi &j1)
{
	delete [] st1.name;
	delete [] str1.rank;
	delete [] st1.type;
	delete [] st1.planet;
	
	char* buffer=new char[SIZE];
	input.getline(buffer,SIZE);
	st1.id=new char[strlen(buffer)+1];
	strcpy(st1.id,buffer);
	input.getline(buffer,SIZE);
	st1.rank=new char[strlen(buffer)+1];
	strcpy(st1.rank,buffer);
	input.getline(buffer,SIZE);
	st1.type=new char[strlen(buffer)+1];
	strcpy(p1.type,buffer);
	input>>st1.planet;
	delete []buffer;
	return input;
}
void Galaxy :: copy(const Galaxy &other)
{
  this->name=new char[strlen(other.name)+1];
  strcpy(this->name,other.name);
  this->size=other.size;
  this->capacity=other.capacity;
  this->planets=new Planet[this->capacity];
  for(int i=0;i<this->size;i++)
 {
   this->planets[i]=other.planets[i];
 }


}
void Galaxy :: destroy()
{
  delete [] this->name;
  delete [] this->planets;
}
void Galaxy :: resize()
{
  Planet *temp=new Planet[this->capacity*2];
  for(int i=0;i<this->capacity;i++)
  {
    temp[i]=this->planets[i];
  }
   this->capacity*=2;
   delete[] this->planets;
   this->planets=temp;
}
bool Galaxy :: contains(Galaxy planet)
{
  for(int i=0;i<this->size;i++)
  {
     if(planet==this->planets[i])
    {
       return false;
    }
  }
   return true;
}

bool Galaxy :: Add(Galaxy planet)
{
  if(this->contains(planet))
  {
     return false;
  }
  if(size+1>=capacity)
  {
     resize();
  }
  this->planets[size++]=planet;
  return true;
}
Galaxy& Galaxy :: operator +=(const Galaxy &gl1)
{
  for(int i=0;i<this->size;i++)
  {
     this->Add(gl1.planets[i]);
  }
   return *this;
}
Galaxy :: Galaxy()
{
   name=NULL;
   size=0;
   capacity=DEFAULT_CAP;
   planets=new Planet[DEFAULT_CAP];
}
Galaxy :: Galaxy(char* name Planet* planets,int size)
{
  this->name=new char[strlen(name)+1];
  strcpy(this->name,name);
  this->size=size;
  this->capacity=size*2;
  this->planets=new Planet[this->capacity];
  for(int i=0;i<this->size;i++)
{
  this->planets[i]=planets[i];
}

}
Galaxy& Galaxy :: operator -=(const Galaxy &gl1)
{
  for(int i=0;i<this->size;i++)
 {
   this->deleteplanets(g1.planets[i]);
 }
return *this;
Galaxy :: Galaxy(const Galaxy &other)
{
  copy(other);
}
Galaxy& Galaxy :: operator =(const Planet &other)
{
  if(this!=&other)
{
  destroy();
  copy(other);
}
 return *this;
}

Planet* Galaxy :: getPlanets() const
{
  return this->planets;
}
int Galaxy :: getSize() const
{
  return this->size;
}
void Army :: copy(const Army &other)
{
  this->size=other.size;
  this->capacity=other.capacity;
  this->troops=new Stormtrooper[this->capacity];
  for(int i=0;i<this->size;i++)
{
  this->troops[i]=other.troops[i];
}

}
void Army :: destroy()
{
  delete []this->troops;
}
Army :: Army()
{
  this->size=0;
  this->capacity=DEFAULT_CAP;
  this->troops=new Stormtrooper[DEFAULT_CAP];
}
Army :: Army(Army* troops,int size)
{ 
  this->size=size;
  this->capacity=2*size;
  this->troops=new Army[this->capacity];
  for(int i=0;i<this->size;i++)
{
  this->troops[i]=troops[i];
}

}
Army :: Army(const Army &other)
{
  copy(other);
}
Army& Army :: &operator =(const Army &other)
{
   if(this!=&other)
  {
     destroy();
     copy(other);
  }
    return *this;
}
Army :: ~Army()
{
  destroy();
}
Army& Army :: operator +=(const Army &a1)
{
   for(int i=0;i<this->size;i++)
   {
     this->Add(a1.troops[i]);
   }
   return *this;
} 
Army& Army :: operator -=(const Army &a1)
{
  for(int i=0;i<this->size;i++)
  {
    this->deleteTroops(a.troops[i]); 
  }
  return *this;
}
void Army :: resize()
{
  Stormtrooper*temp=new Stormtrooper[this->capacity*2];
  for(int i=0;i<this->capacity;i++)
  {
     temp[i]=this->troops[i];
  }
  this->capacity*=2;
  delete[] this->troops;
  this->troops=temp;
}
bool Army :: Add(Army Stormtrooper)
{
   if(this->contains(Stormtrooper))
   {
      return false;
   }
   if(size+1>=capacity)
  {
    resize();
  }
  troops[size++]=Stormtooper;
  return true;
}
bool Army ::contains(Army Stormtrooper)
{
  for(int i=0;i<this->size;i++)
 {
   if(Stormtrooper==this->troops[i])
   {
       return true;
   }
 }
  return false;

}
Stormtrooper* Army :: getTroops()const
{
  return this->troops;
}
int Army :: getSize()const
{
  return this->size;
}
void JediTemple :: copy(const JediTemple &other)
{
  this->size=other.size;
  this->capacity=other.capacity;
  this->jedi=new JediTemple[this->capacity];
  for(int i=0;this->size;i++)
  {
     this->jedi[i]=other.jedi[i];
   }
}
void JediTemple :: destroy()
{
  delete [] this->jedi;
}
JediTemple :: JediTemple()
{
  this->size=0;
  this->capacity=DEFAULT_CAP;
  this->jedi=new Jedi[DEFAULT_CAP];
}
JediTemple :: JediTemple(Jedi* jedi ,int size)
{
  this->size=size;
  this->capacity=2*size;
  this->jedi=new Jedi[this->capacity];
  for(int i=0;i<this->size;i++)
  {
    this->jedi[i]=other.jedi[i];
  }
}
JediTemple :: JediTemple(const JediTemple &other)
{
  copy(other);
}
JediTemple& JediTemple :: operator =(const JediTemple &other)
{
  if(this!=&other)
  {
     destroy();
     copy(other);
  }
    return *this;
}
JediTemple :: ~JediTemple()
{ 
  destroy();
}
Jedi* Jeditemple :: getJedi() const
{
  return this->jedi;
}
int JediTemple :: getSize() const
{
  return this->size;
}
bool JediTemple :: contains(JediTemple Jedi)
{
  for(int i=0;i<this->size;i++)
  {
    if(Jedi==this->jedi[i])
   {
      return true;
   }
    return false;
}
bool JediTemple :: Add(JediTemple Jedi)
{
  if(this->contains(Jedi))
  {
    return false;
  }
  if(size+1>=capacity)
  {
    resize();
  }
  jedi[size++]=Jedi;
  return true;
}
void JediTemple :: resize()
{
  Jedi* temp=new Jedi[this->capacity*2];
  for(int i=0;i<this->capacity;i++)
  {
    temp[i]=this->jedi[i];
  }
  this->capacity*=2;
  delete [] this->jedi;
  this->jedi=temp;
}
JediTemple& JediTemple :: operator +=(const JediTemple &j1)
{
  for(int i=0;i<this->size;i++)
  {
     this->Add(j1.jedi[i]);
  }
   return *this;
}
JediTemple& JediTemple :: operator -=(const JediTemple &j1)
{
  for(int i=0;i<this->size;i++)
  {
    this->deleteJedi(j1.jedi[i]);
  }
   return *this;
}

void GalacticRepublic :: copy(const GalacticRepublic &other)
{
  this->name=new char[strlen(other.name)+1];
  strcpy(this->name,other.name);
  this->JediTemple=other.JediTemple;
  this->Army=other.Army;
  this->planet=other.planet;
}
void GalacticRepublic :: destroy()
{
  delete [] this->name;
}
GalacticRepublic :: GalacticRepublic()
{
  this->name=NULL;
  this->JediTemple=default JediTemple;
  this->Army=default Stormtrooper;
  this->planet=default Planet;
}
GalacticRepublic :: GalacticRepublic(const char* name,JediTemple JediTemple,Stormtrooper Army,Planet planet)
{
  this->name=new char[strlen(name)+1];
  strcpy(this->name,name);
  this->JediTemple=JediTemple;
  this->Army=Army;
  this->planet=planet;
}
GalacticRepublic :: GalacticRepublic(const GalacticRepublic &other)
{
   copy(other);
}
GalacticRepublic& GalacticRepublic :: operator =(const GalacticRepublic &other)
{
   if(this!=&ohter)
  {
    destroy();
    copy(other);
  }
 return *this;
}
GalacticRepublic :: ~GalacticRepublic()
{
  destroy();
}
char* GalacticRepublic :: getName()const;
{
  return this->name;
}
JediTemple GalacticRepublic :: getJediTemple()const;
{
  return this->JediTemple;
}
Stormtrooper GalacticRepublic :: getArmy()const;
{
  return this->Army;
}
Planet GalacticRepublic :: getplanet()const;
{
  return this->planet;
}
void setName(const char* name)
{
  delete []this->name;
  this->name=new char[strlen(name)+1];
  strcpy(this->name,name);
}
void setJediTemple(JediTemple JediTemple)
{
  this->JediTemple=JediTemple;
}
void setArmy(Stormtrooper Army)
{
  this->Army=Army;
}
void setplanet(Planet planet)
{
  this->planet=planet;
}
ostream &operator <<(ostream &output,GalacticRepublic &g1)
{
  output<<g1.name<<endl;
  output<<g1.JediTemple<<endl;
  output<<g1.Army<<endl;
  output<<g1.planet<<endl;
  return output;
}
istream &operator >>(istream &input,GalacticRepublic &g1)
{
  delete[] g1.name;
  char* buffer=new char[SIZE];
  input.getline(buffer,SIZE);
  g1.name=new char[strlen(buffer)+1];
  strcpy(g1.name,buffer);
  input>>g1.JediTemple;
  input>>g1.Army;
  input>>g1.planet;
  return input;
}
void System :: copy(const System &other)
{
  this->name=new char[strlen(other.name)+1);
  strcpy(this->name,other.name);
  this->size=other.size;
  this->capacity=other.capacity;
  this->planets=new Planet[other.capacity];
  for(int i=0;i<this->size;i++)
  {
    this->planets[i]=other.planets[i];
  }
}
void System :: destroy()
{
  delete [] this->planets;
  delete [] this->name;
}
void System :: resize()
{
  this->capacity*=2;
  Planet *temp=this->planets;
  this->planet=new Planet[this->capacity];
  for(int i=0;i<this->size;i++)
  {
    planets[i]=temp[i];
  }
  delete [] temp;
}
int System :: getSize()const
{
  return this->size;
}
char* System :: getSystemName()const
{
  return this->name;
}
System::System() {
	this->capacity = 10;
	this->size = 0;
	this->planets = new Planet[capacity];
	this->systemName = new char[strlen(planets[0].getsystem()) + 1];
	strcpy_s(this->systemName, strlen(planets[0].getsystem()) + 1, planets[0].getsystem());
}
System::~System() {
	destroy();
}
System::System(const System &other) {
	copy(other);
}
System& System::operator= (const System &other) {
	if (&other != this) {
		destroy();
		copy(other);
	}
	return *this;
}
void System::operator+=(const Planet &other) {
	if (this->size + 1 >= this->capacity) {
		resize();
	}
	this->planets[size] = other;
	delete[] this->systemName;
	this->systemName = new char[strlen(planets[size].getsystem()) + 1];
	strcpy_s(this->systemName, strlen(planets[size].getsystem()) + 1, planets[size].getsystem());
	this->size++;
}
void System::operator-=(const char _name[]) {
	for (int i = 0; i < this->size; i++) {
		if (strcmp(planets[i].getname(), _name) == 0) {
			for (int k = i; k < size - 1; k++) {
				planets[k] = planets[k + 1];
			}
			this->size--;
			break;
		}
	}
}
ostream& operator<<(ostream& os, const System &other) {
	for (int i = 0; i < other.size; i++) {
		if (i + 1 == other.size) {
			os << other.planets[i].getname() << endl;
			os << other.planets[i].getsystem() << endl;
			os << other.planets[i].getrepublic();
			break;
		}
		os << other.planets[i];
	}
	return os;
}


