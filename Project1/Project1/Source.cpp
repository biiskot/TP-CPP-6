#include <iostream>
#include <vector>
#include <queue>
#include "Header.hpp"

using namespace std;

int nbSommets;
//Partie 2 Etape 1 :

//Questions : 

vector<vector<int>> grapheEtCapacites; // int ??

//Partie 2 Etape 2 :
bool parcoursLargeur(vector<vector<int>> graphe, int idS, int idT, vector<int> cheminAmeliorant) { //int ??
	bool sommetVisite[graphe.size()] = false;
	queue<int> file; // voir sujet pour fonctions associéees

	sommetVisite[idS] = true;
	cheminAmeliorant[idS] = -1;

	while (file.empty() == false) {

		//u = file.pop();

		for (int i = 0; i < graphe.size(); i++) {
			for (int j = 0; j < graphe.size(); j++) {
				if (sommetVisite[graphe[i][j]] == false) { // && il existe un arc u>v
					file.push(graphe[i][j]);
					//cheminAmeliorant[graphe[i][j]] = u;
					sommetVisite[graphe[i][j]] = true;
				}
			}
		}
	}
	if (true) {//si la fonction trouve un chemin de s à t
		return true;
	}
	else {
		return false;
	}
}

//Partie 2 Etape 3 :

int fordFulkerson(vector<vector<int>> matAdj, int s, int t, ) {// s et t --> indices
	int u, v;
	vector<vector<int>> grapheResiduel = grapheEtCapacites; //int ?? | taille de grapheEtCapacites
	vector<int> cheminAmeliorant; //taille = nbSommets
	int max_flow = 0;

	while (parcoursLargeur()) { //ajouter les parametres
		for (size_t i = 0; i < length; i++)
		{

		}
		for (size_t i = 0; i < length; i++)
		{

		}
	}

	return max_flow;
}

//Inclure screenshot

//Partie 3 :

int main() {

}