#ifndef BASEPROT_ADRES_H
#define BASEPROT_ADRES_H
#include <string>
using namespace std;
class Adres{
private:
    string country;
    string city;
    string streat;
    string house;
    string floor;
    string apartament;
public:
    void base(string a, string b, string c, string d, string e, string f);
    string getCountry();
    string getCity();
    string getStreat();
    string getHouse();
    string getFloor();
    string getApartament();
};

#endif //BASEPROT_ADRES_H
