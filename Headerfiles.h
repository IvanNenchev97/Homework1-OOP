#include "stdafx.h"
#pragma once
#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 100;
const int DEFAULT_CAP = 16;
class Planet
{
private:
	char* name;
	char* planetSystem;
	char* republic;
	void copy(const Planet &other);
	void destroy();
public:
	Planet();
	Planet(char* name, char* planetSystem, char* republic);
	Planet(const Planet &other);
	Planet &operator = (const Planet &other);
	~Planet();

	char* getName()const;
	char* getplanetSystem()const;
	char* getRepublic()const;

	void setName(const char* name);
	void setplanetSystem(const char* planetSystem);
	void setRepublic(const char* republic);

	friend ostream &operator <<(ostream &output, const Planet &p1);
	friend istream &operator >> (istream &input, const Planet &p1);
};
class Jedi
{
private:
	char* name;
	char* rank;
	char* species;
	char* militaryRank;
	double midi - chlorian;
	Planet planet;
	void copy(const Jedi &other);
	void destroy();
public:
	Jedi();
	Jedi(char* name, char* rank, char* species, char* militaryRank, double midi - chlorian, Planet planet);
	Jedi(const Jedi &other);
	Jedi &operator = (const Jedi &other);
	~Jedi();

	const char* getName()const;
	const char* getRank()const;
	const char* getSpecies()const;
	const char* getMilitaryRank()const;
	double getMidiChlorian()const;
	Planet getPlanet()const;

	void setName(const char* name);
	void setRank(const char* rank);
	void setSpecies(const char* species);
	void setMilitaryRank(const char* militaryRank);
	void setMidiChlorian(double midi - chlorian);
	void setPlanet(Planet planet);

	friend ostream &operator <<(ostream &output, Jedi &j1);
	friend istream &operator >> (istream &input, Jedi &j1);
};
class Stormtrooper
{
private:
	char* id;
	char* rank;
	char* type;
	Planet planet;
	void copy(const Stormtrooper &other);
	void destroy();
public:
	Stormtrooper();
	Stormtrooper(char* name, char* rank, char* type, Planet planet);
	Stormtrooper(const Stormtrooper &other);
	Stormtrooper &operator = (const Stormtrooper &other);
	~Stormtrooper();

	const char* getId() const;
	const char* getRank() const;
	const char* getType() const;
	Planet getPlanet() const;

	void setId(const char* id);
	void setRank(const char* rank);
	void setType(const char* type);
	void setPlanet(Planet planet);

	friend ostream &operator <<(ostream &output, Stormtrooper &st1);
	friend istream &operator >> (istream &input, Stormtrooper &st1);
};
class Galaxy
{
private:
	char* name;
	Planet* planets;
	int size;
	int capacity;
	void copy(const Galaxy &other);
	void destroy();
public:
	Galaxy();
	Galaxy(char* name, Planet* planets, int size, int capacity);
	Galaxy(const Galaxy &other);
	Galaxy &operator = (const Galaxy &other);
	~Galaxy();
	Planet* getPlanets()const;
	int getSize()const;
	bool contains(Galaxy planet);
	bool Add(Galaxy planet);
	Galaxy &operator +=(const Galaxy &gl1);
	Galaxy &operator -=(const Galaxy &gl1);
	void resize();

};
class Army
{
private:
	Stormtrooper* troops;
	int size;
	int capacity;
	void copy(const Army &other);
	void destroy();
public:
	Army();
	Army(Stormtrooper* troops, int size);
	Army(const Army &other);
	Army &operator =(const Army &other);
	~Army();
	Stormtrooper* getTroops()const;
	int getSize()const;
	bool contains(Army Stormtrooper);
	bool Add(Army Stormtrooper);
	Army &operator +=(const Army &a1);
	Army &operator -=(const Army &a1);
	void resize();

};
class JediTemple
{
private:
	Jedi* jedi;
	int size;
	int capacity;
	void copy(const JediTemple &other);
	void destroy();
public:
	JediTemple();
	JediTemple(Jedi* jedi, int size)
	JediTemple(const JediTemple &other);
	JediTemple &operator =(const JediTemple &other);
	~JediTemple();
	Jedi* getJedi()const;
	int getSize()const;
	bool contains(JediTemple Jedi);
	bool Add(JediTemple Jedi);
	JediTemple &operator +=(const JediTemple &j1);
	JediTemple &operator -=(const JediTemple &j1);
	void resize();
};
class GalacticRepublic
{
	private:
		char* name;
		JediTemple JediTemple;
		Stormtrooper Army;
		Galaxy galaxy;
		void copy(const GalacticRepublic &other);
		void destroy();
	public:
		GalacticRepublic();
		GalacticRepublic(char* name,JediTemple JediTemple,Stormtrooper Army,Galaxy galaxy);
		GalacticRepublic(const GalacticRepublic &other);
		GalacticRepublic &operator =(const GalacticRepublic &other);
		~GalacticRepublic();
		
		char* getName()
		JediTemple getJediTemple();
		Stormtrooper getArmy();
		Galaxy getGalaxy();
		
		char* setName(const char* name)const;
		JediTemple setJediTemple(JediTemple JediTemple)const;
		Stormtrooper setArmy(Stormtrooper Army)const;
		Galaxy setGalaxy(Galaxy galaxy)const;
		
		friend ostream &operator <<(ostream &output,GalacticRepublic &g1);
		friend istram &operator >>(istream &input,GalacticRepublic &g1);
};
class System
{
	private:
		char* name;
		Planet* planets;
		int size;
		int capacity;
		void resize();
		void copy(const Planet &other);
		void destroy();
	public:
		System();
		System(const System &other);
		System &operator =(const System &other);
		~System();
		int getsize()const;
		Planet* getPlanets()const;
		char* getSystemName()const;
		System &operator +=(const System &other);
		System &operator -=(const char _name[]);
		ostream &operator <<(ostream &output,System &other);
};

