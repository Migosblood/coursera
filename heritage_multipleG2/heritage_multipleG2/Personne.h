#pragma once
#include<iostream>
using namespace std;
class Personne
{
public: 
	Personne(string n, string p);
   virtual	void afficher();


private: 
	string nom; 
	string prenom; 
};

