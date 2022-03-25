#include "Etudiant.h"

Etudiant::Etudiant(string n, string p, int cne)
	: Personne(n,p)
{
	this->cne = cne;
}

void Etudiant::afficher()
{
	this->Personne::afficher();
	std::cout << "cne: " << this->cne << std::endl;
}

Etudiant::~Etudiant()
{
}
