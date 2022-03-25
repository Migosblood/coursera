#include "Professeur.h"

Professeur::Professeur(string n, string p,int mat)
	:Personne(n,p)
{
	this->matricule = mat;
}

void Professeur::afficher()
{
	this->Personne::afficher();
	std::cout << "matricule: " << this->matricule<< std::endl;
}

Professeur::~Professeur()
{
}
