#pragma warning(disable:4996)
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;


class Client
{
private:
    string nume;
    string prenume;
    char* email;
    string nrTelefon;
   

    friend ostream& operator<<(ostream& os, const Client& N);

    friend istream& operator>>(istream& , Client& );

public:
    Client();

    Client(string nume, string prenume, const char* email, string nrTelefon);

    void setNume();

    void setPrenume();

    void setEmail(const char* otherEmail);

    Client(const Client& C);

    Client& operator=(const Client& i);

    void setNrTelefon();

    string getNume();

    string getPrenume();

    char* getEmail();

    string getNrTelefon();

    ~Client();

    string operator()(string alDoileaPrenume);

  
}; 
