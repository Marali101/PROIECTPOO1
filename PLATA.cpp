#include "Plata.h"

Plata::Plata()
{
    numeProprietar = "Necunoscut";
    nrCard = "Necunoscut";
    dataExpirare = "Necunoscuta";
    CVV = 0;
}

Plata::Plata(string numeProprietar, string nrCard, string dataExpirare, int CVV)
{
    this->numeProprietar = numeProprietar;
    this->nrCard = nrCard;
    this->dataExpirare = dataExpirare;
    this->CVV = CVV;
}

const string& Plata::GetNrCard() const {
    return nrCard;
};

void Plata::SetNrCard(const string& nr_Card) {
        nrCard = nr_Card;
    }

    const string& Plata::GetDataExpirare() const {
        return dataExpirare;
    }

    void Plata::SetDataExpirare(const string& data_Expirare) {
        dataExpirare = data_Expirare;
    }

    const string& Plata::GetNumeProprietar() const {
        return numeProprietar;
    }

    void Plata::SetNumeProprietae(const string& nume_Proprietar) {
        numeProprietar = nume_Proprietar;
    }

    int Plata::GetCVV() const {
        return CVV;
    }

    void Plata::SetCVV(int _CVV) {
        CVV = _CVV;
    }

    ostream& operator<<(ostream& os, const Plata& R)
    {
        os << "Proprietar card: " << R.numeProprietar << "Numarul cardului: " << R.nrCard << " Data de expirare a cardului: " << R.dataExpirare;
        return os;
    }

    istream& operator>> (istream& is, Plata& S)
    {
        is >> S.numeProprietar >> S.nrCard  >> S.dataExpirare;
        return is;
    }
