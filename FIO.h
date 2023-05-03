#ifndef BASEPROT_FIO_H
#define BASEPROT_FIO_H
#include <string>
using namespace std;

class FIO {
private:
    string name;
    string lastName;
    string surname;
public:
    void base(string a, string b, string c);
    string getName();
    string getLastName();
    string getSurname();
};


#endif //BASEPROT_FIO_H
