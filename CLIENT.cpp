#include "Client.h"
#include "Plata.h"

Client::Client()
{
    nume = "Necunoscut";
    prenume = "Necunoscut";
    this->email = new char[strlen("") + 1];
    strcpy_s(this->email, strlen("") + 1, "");
    nrTelefon = "Necunoscut";
};


Client::Client(string nume, string prenume, const char* email, string nrTelefon)
{
    this->nume = nume;
    this->prenume = prenume;
    this->email = new char[strlen(email) + 1];
    strcpy_s(this->email, strlen(email) + 1, email);
    this->nrTelefon = nrTelefon;

};

void Client::setNume() {
    cout << "Introduceti numele dumneavoastra: ";
    cin.ignore();
    getline(cin, nume);
    cout << endl;
};

void Client::setPrenume() {
    cout << "Introduceti prenumele dumneavoastra: ";
    cin.ignore(); // ignore the rest of the data if its longer than some length
    getline(cin, prenume);
    cout << endl;
};

void Client::setEmail(const char* otherEmail) {
    email = new char[strlen(otherEmail) + 1];
    strcpy_s(email, strlen(otherEmail) + 1, otherEmail);

    if (int valid_mail = 0) {
        char temp;
        cout << "Introduceti adresa dumneavoastra de email: ";
        cin >> email;
        cout << endl;
    }

};

Client::Client(const Client& C)
{
    this->email = new char[strlen(C.email) + 1];
    strcpy_s(this->email, strlen(C.email) + 1, C.email);
    this->nume = C.nume;
    this->prenume = C.prenume;
    this->nrTelefon = C.nrTelefon;
};

  Client& Client:: operator=(const Client& i)
{
    if (this != &i)
    {
        this->email = new char[strlen(i.email) + 1];
        strcpy_s(this->email, strlen(i.email) + 1, i.email);
        this->nume = i.nume;
        this->prenume = i.prenume;
        this->nrTelefon = i.nrTelefon;
    }
    return *this;
}

void Client::setNrTelefon() {
    cout << "                  Adaugati numarul de telefon: ";
    cin >> nrTelefon;

    int phone_length = nrTelefon.length();

    while (phone_length != 10) {
        cout << endl;
        cout << "                Adaugati un numar de telefon valid: ";
        cin >> nrTelefon;
        phone_length = nrTelefon.length();
    }

    cout << endl;
}

string Client::getNume() {
    return nume;
}

string Client::getPrenume() {
    return prenume;
}

string Client::getNrTelefon() {
    return nrTelefon;
}

char* Client::getEmail() {
    return email;
}



Client::~Client()
{
    if (this->email != nullptr)
    {
        delete[] this->email;
        this->email = nullptr;
    }
};

string Client::operator()(string alDoileaPrenume)
{
    return nume + prenume + alDoileaPrenume;
}

ostream& operator<<(ostream& os, const Client& N)
{
    os << N.nume << '-' << N.prenume;
    return os;
}

istream& operator>> (istream& is, Client& P)
{
    is >> P.prenume >> P.nume;
    return is;
}


int main()
{

};

