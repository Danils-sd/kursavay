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
    string kard;
public:
    void base(int a, FIO b, string c, Adres d, string e);
    void update(vector<User>& d, User a);

    int getKod();
    FIO getFio();
    string getNumber();
    Adres getAdres();
    string getKard();
};


#endif //BASEPROT_USER_H
