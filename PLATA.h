#pragma warning(disable:4996)
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Plata {
protected:
    string numeProprietar;
    string nrCard;
    string dataExpirare;
    int CVV; 

    friend ostream& operator<<(ostream& os, const Plata& R);

    friend istream& operator>>(istream&, Plata&);

public:
    Plata();

    Plata(string numeProprietar, string nrCard, string dataExpirare, int CVV);
    
    const string& GetNrCard()  const;

    void SetNrCard(const string& nr_Card);

    const string& GetDataExpirare() const;

    void SetDataExpirare(const string& data_Expirare);

    const string& GetNumeProprietar() const;

    void SetNumeProprietae(const string& nume_Proprietar);

    int GetCVV() const;

    void SetCVV(int _CVV);



};