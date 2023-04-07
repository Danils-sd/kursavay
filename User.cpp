//
// Created by Danila on 28.03.2023.
//
#include <vector>
#include "User.h"
void User::base(int a, FIO b, std::string c, Adres d, int e) {
    kod = a;
    fio = b;
    tNumber = c;
    adres = d;
    kard = e;
}

void User::update(vector<User>& d, User a) {
    d.push_back(a);
}

void User::del(vector<User>& d, int a) {
    d.pop_back();
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

int User::getKard() {
    return kard;
}