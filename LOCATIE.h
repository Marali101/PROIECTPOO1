#pragma warning(disable:4996)
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Locatie
{
private:
	int* nrScaunePeRand;
	int nrRanduri;
	int nrLoc;



public:
	Locatie();

	Locatie(int nrRanduri, int* nrScaunePeRand, int nrLoc);

	Locatie(const Locatie& a);

	int* getNrScaunePeRand();

	Locatie& operator=(const Locatie& a);

	~Locatie();


};



