#include <vector>
#include "User.h"
void User::base(int a, FIO b, std::string c, Adres d, std::string e) {
    kod = a;
    fio = b;
    tNumber = c;
    adres = d;
    kard = e;
}

void User::update(vector<User>& d, User a) {
    d.push_back(a);
}



int User::getKod() {
    return kod;
}

FIO User::getFio() {
    return fio;
}

string User::getNumber() {
    return tNumber;
}

Adres User::getAdres() {
    return adres;
}

string User::getKard() {
    return kard;
}
