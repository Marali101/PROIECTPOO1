#include "Locatie.h"

Locatie::Locatie()
{
	int nrRanduri = 0;
    int* nrScaunePeRand = nullptr;
	int nrLoc=0;

};

Locatie::Locatie(int nrRanduri, int* nrScauneRanduri, int nrLoc)
{
	this->nrLoc = nrLoc;
	if (nrScaunePeRand != nullptr && nrRanduri > 0)
	{
		nrScaunePeRand = new int[nrRanduri];
		for (int i = 0; i < nrRanduri; i++)
		{
			nrScaunePeRand[i] = nrScauneRanduri[i];
		}
		this->nrRanduri = nrRanduri;
	}
	else
	{
		nrScaunePeRand = nullptr;
		this->nrRanduri = 0;
	}
};

Locatie::Locatie(const Locatie& a)
{
	this->nrLoc = a.nrLoc;

	if (a.nrScaunePeRand != nullptr && a.nrRanduri > 0)
	{
		this->nrScaunePeRand = new int[a.nrRanduri];
		for (int i = 0; i < a.nrRanduri; i++)
		{
			this->nrScaunePeRand[i] = a.nrScaunePeRand[i];
		}
		this->nrRanduri = a.nrRanduri;
	}
	else
	{
		this->nrScaunePeRand = nullptr;
		nrRanduri = 0;
	};
}

	//int* Locatie::getNrScaunePeRand()
	//{
		//if (nrScaunePeRand != nullptr)
		//{
			//int* copieNrScaunePeRand = new int[nrScaunePeRand];
			//for (int i = 0; i < nrRanduri; i++)
			//{
				//copieNrScaunePeRand[i] = nrScaunePeRand[i];
			//}
			//return copieNrScaunePeRand;
		//}
		//else
			//return nullptr;
	//}


    	//Locatie& Locatie::operator=(const Locatie & a)
	//{
	
			//this->nrLoc = a.nrLoc;

			//if (a.nrScaunePeRand != nullptr && a.nrRanduri > 0)
			//{
				//this->nrScaunePeRand = new int[a.nrRanduri];
				//for (int i = 0; i < a.nrRanduri; i++)
				//{
					//this->nrScaunePeRand[i] = a.nrScaunePeRand[i];
				//}
				//this->nrRanduri = a.nrRanduri;
			//}
			//else
			//{
				//this->nrScaunePeRand = nullptr;
				//nrRanduri = 0;
			//};
		

		//return *this;

	//}


	//Locatie::~Locatie()
	//{
		//delete[] nrScaunePeRand;
	//}



