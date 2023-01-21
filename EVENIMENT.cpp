#include "Eveniment.h"


Eveniment::Eveniment() : durataMaximaEveniment(12)
{
	int zi = 0;
	int luna = 0;
	int an = 0;
	numeEveniment = "Necunoscut";
	data = "Necunoscuta";
	ora = "Necunoscuta";
	loc = "Necunoscut";
};

Eveniment::Eveniment(int zi, int luna, int an, string numeEveniment, string data, string ora, string loc, const int durataMaximaEveniment) : durataMaximaEveniment(durataMaximaEveniment)
{
	this->numeEveniment = numeEveniment;
	this->data = data;
	this->ora = ora;
	this->loc = loc;
	this->zi = zi;
	this->luna = luna;
	this->an = an;
}

string Eveniment::getNumeEveniment()
{
	return numeEveniment;
}

string Eveniment::getData()
{
	return data;
}

string Eveniment::getOra()
{
	return ora;
}

string Eveniment::getLoc()
{
	return loc;
}

string Eveniment::getTipEveniment()
{
	return tipEveniment;
}

void Eveniment::setTipEveniment(string tipEveniment)
{
	Eveniment::tipEveniment = tipEveniment;
}


 long Eveniment::getOraUnuiEveniment()
{
	 cout << "Acest " << tipEveniment << " este un eveniment de tip caritabil";
	 return 0;
}

ostream& operator<<(ostream& os, const Eveniment& O)
{
	os << O.zi << '/' << O.luna << '/' << O.an;
	return os;
}

istream& operator>> (istream& is, Eveniment& Q)
{
	is >> Q.an >> Q.luna >> Q.zi;
	return is;
}
