#pragma once
#include<iostream>
#include"Personne.h"
using namespace std;
class Etudiant: public virtual Personne
{
public:

	Etudiant(string n, string p,int cne);
	 void afficher()override;
	~Etudiant();

private: 
	int cne;
};

