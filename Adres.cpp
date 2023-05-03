#include "Adres.h"
#include <string>
using namespace std;
void Adres::base(string a, string b, string c, string d, string e, string f) {
    country = a;
    city = b;
    streat = c;
    house = d;
    floor = e;
    apartament = f;
}

string Adres::getCountry() {
    return  country;
}

string Adres::getCity() {
    return city;
}

string Adres::getStreat() {
    return streat;
}

string Adres::getHouse() {
    return house;
}

string Adres::getFloor() {
    return floor;
}

string Adres::getApartament() {
    return apartament;
}
