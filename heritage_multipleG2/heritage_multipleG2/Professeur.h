#pragma once
#include<iostream>
#include"Personne.h"
using namespace std;
class Professeur: public virtual Personne
{

public: 
	Professeur(string n, string p,int mat);
	virtual void afficher() override;
	~Professeur();
private: 
	int matricule;
};

