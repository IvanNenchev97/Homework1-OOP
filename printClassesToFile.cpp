#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
class Planet
{
public:
	char* name;
	char* planetSystem;
	char* republic;
	Planet()
	{
		name = NULL;
		planetSystem = NULL;
		republic = NULL;
	}
	Planet(char* name, char* planetSystem, char* republic)
	{
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name,strlen(name)+1, name);
		this->planetSystem = new char[strlen(planetSystem) + 1];
		strcpy(this->planetSystem,strlen(planetSystem)+1, planetSystem);
		this->republic = new char[strlen(republic) + 1];
		strcpy(this->republic,strlen(republic)+1, republic);
	}
	void writeToFile(char* filePath)
	{
		ofstream file;
		file.open(filePath, ios::out);
		if (file.is_open())
		{
			file << name << endl;
			file << planetSystem << endl;
			file << republic << endl;
		}
		file.close();
	}
};
class Jedi
{
public:
	char* name;
	char* rank;
	char* species;
	char* militaryRank;
	double midi - chlorian;
	Planet planet;
	Jedi()
	{
		name = NULL;
		rank = NULL;
		species = NULL;
		militaryRank = NULL;
		midi - chlorian = 0;
		planet = defaultPlanet;
	}
	Jedi(char* name, char* rank, char* species, char* militaryRank, double midi - chlorian, Planet planet)
	{
		this -> name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		this->rank = new char[strlen(rank) + 1];
		strcpy_s(this->rank, strlen(rank) + 1, rank);
		this->species = new char[strlen(species) + 1, species];
		strcpy_s(this->species, strlen(species) + 1, species);
		this->militaryRank = new char[strlen(militaryRank) + 1];
		strpcy_s(this->militaryRank, strlen(militaryRank) + 1, militaryRank);
		this->midi - chlorian = midi - chlorian;
		this->planet = planet;
	}
	void writeToFile1(char* filePath1)
	{
		ofstream file1;
		file1.open(filePath1,ios::out);
		if (file1.is_open())
		{
			file1 << this->name << endl;
			file1 << this->rank << endl;
			file1 << this->species << endl;
			file1 << this->militaryRank << endl;
			file1 << this->midi - chlorian << endl;
			file1 << this->planet << endl;
		}
		file1.close();
	}
};
class Stormtrooper
{
public:
	char* id;
	char* rank;
	char* type;
	Planet planet;
	Stormtrooper()
	{
		id = NULL;
		rank = NULL;
		type = NULL;
		planet = defaultPlanet;
	}
	Stormtrooper(char* id, char* rank, char* type, Planet planet)
	{
		this->id = new char[strlen(id) + 1];
		strcpy_s(this->id, strlen(id) + 1, id);
		this->rank = new char[strlen(rank) + 1];
		strcpy_s(this->rank, strlen(rank) + 1, rank);
		this->type = new char[strlen(type) + 1];
		strcpy_s(this->rank, strlen(type) + 1, type);
		this->planet = planet;
	}
	void writeToFile2(char* filePath2)
	{
		ofstream file2;
		file2.open(filePath2, ios::out);
		if (file2.is_open())
		{
			file2 << this->id << endl;
			file2 << this->rank << endl;
			file2 << this->type << endl;
			file2 << this->planet << endl;
		}
		file2.close();
	}
};
int main()
{
	char* filePath = "Planet.txt";
	char* filePath1 = "Jedi.txt";
	char* filePath2 = "Stormtrooper.txt";
	Planet p1("Earth", "PlanetSystem", "Republic");
	Jedi j1("Jedi1", "Rank1", "Species1", "MilitaryRank1", "midi-chlorian1", "Earth");
	Stormtrooper s1("Stormtooper", "Rank1", "Type1", "Earth");
	p1.writeToFile(filePath);
	j1.writeToFile1(filePath1);
	s1.writeToFile2(filePath2);
}

