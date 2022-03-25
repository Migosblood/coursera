#include "PA.h"

PA::PA(string n, string p,int cne, int matricule, string thema)
:Etudiant(n,p, cne),Professeur(n,p,matricule),Personne(n,p)
{
	this->thematique = thema;
}

void PA::afficher()
{
	this->Etudiant::afficher();  //cne
	this->Professeur::afficher();//matricule
	std::cout << "thematique: " << this->thematique << std::endl;

}

PA::~PA()
{
}
