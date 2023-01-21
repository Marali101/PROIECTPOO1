#pragma warning(disable:4996)
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <time.h>
using namespace std;

class Eveniment
{
private:
	int zi, luna, an;
	string numeEveniment;
	string data;
	string ora;
	string loc;
	const int durataMaximaEveniment=0;
	static string tipEveniment;



	friend ostream& operator<<(ostream& os, const Eveniment& O);

	friend istream& operator>>(istream&, Eveniment&);

public:

	Eveniment();

	Eveniment(int zi, int luna, int an, string numeEveniment, string data, string ora, string loc, const int durataMaximaEveniment);

	string getNumeEveniment();

	string getData();

	string getOra();

	string getLoc();

	static string getTipEveniment();

	static void setTipEveniment(string tipEveniment);

	static long getOraUnuiEveniment();

};

string Eveniment::tipEveniment;
