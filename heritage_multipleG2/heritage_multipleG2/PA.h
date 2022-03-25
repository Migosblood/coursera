#pragma once
#include<iostream>
using namespace std;
#include "Etudiant.h"
#include "Professeur.h"
class PA :public Etudiant, public Professeur
{
public:
	PA(string n , string p, int cne, int matricule, string thema);
	void afficher() override;
	~PA();
private:
	string thematique;

};

