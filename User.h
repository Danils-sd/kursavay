//
// Created by Danila on 28.03.2023.
//

#ifndef BASEPROT_USER_H
#define BASEPROT_USER_H
#include "FIO.h"
#include "Adres.h"
#include <vector>
#include <string>
using namespace std;



class User {
private:
    int kod;
    FIO fio;
    string tNumber;
    Adres adres;
    int kard;
public:
    void base(int a, FIO b, string c, Adres d, int e);
    void update(vector<User>& d, User a);
    void del(vector<User>& d, int a);
    int getKod();
    FIO getFio();
    string getNumber();
    Adres getAdres();
    int getKard();
};


#endif //BASEPROT_USER_H
