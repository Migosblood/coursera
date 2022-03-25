#include "Personne.h"

Personne::Personne(string n, string p)
{
	this->nom = n; 
	this->prenom = p;
}

void Personne::afficher()
{
	std::cout << "nom: " << this->nom << std::endl;
	std::cout << "prenom: " << this->prenom << std::endl;


}
