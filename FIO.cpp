#include "FIO.h"
#include <string>
using namespace std;
void FIO::base(string a, string b, string c) {
    name = a;
    lastName = b;
    surname = c;
}

string FIO::getName() {
    return name;
}

string FIO::getLastName() {
    return lastName;
}

string FIO::getSurname() {
    return surname;
}
