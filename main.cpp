#include <iostream>
#include <vector>
#include "User.h"
#include "Adres.h"
#include "FIO.h"

using namespace std;

int _otvet1;

vector<User> date;
int unikKod = 0;
//Функции вывода меню
void manu(){
    cout << "------Выберите действие------" << endl
    << "(0) Вернуться в меню" << endl
    << "(1) Вывести всю базу данных" << endl
    << "(2) Поиск по базе данных" << endl
    << "(3) Добавить данные" << endl
    << "(4) Удалить данные" << endl
    << "Ответ: ";
    cin >> _otvet1;
}

void manuPoisk(){
    cout << "------Варианты поиска------" << endl
         << "(0) По коду" << endl
         << "(1) По ФИО" << endl
         << "(2) По номеру телефона" << endl
         << "(3) По номеру карты" << endl
         << "(4) Вернуться в меню" << endl
         << "Ответ: ";
}

void dobav(){
    string name, lastName, surname;

    string country, city, streat, house, floor, appartament;

    string number;

    int kard;

    cout << "------Заполните данные------" << endl;
    cout << "Введите имя: ";
    cin >> name;
    cout << endl;

    cout << "Введите фамилию: ";
    cin >> lastName;
    cout << endl;

    cout << "Введите отчество(при отцутстиве -): ";
    cin >> surname;
    cout << endl;

    cout << "Введите страну: ";
    cin >> country;
    cout << endl;

    cout << "Введите город: ";
    cin >> city;
    cout << endl;

    cout << "Введите улицу: ";
    cin >> streat;
    cout << endl;

    cout << "Введите номер дома: ";
    cin >> streat;
    cout << endl;

    cout << "Введите этаж: ";
    cin >> floor;
    cout << endl;

    cout << "Введите номер квартиры: ";
    cin >> appartament;
    cout << endl;

    cout << "Введите номер телефона: ";
    cin >> number;
    cout << endl;

    cout << "Введите номер карты: ";
    cin >> kard;
    cout << endl;

    FIO fio;
    fio.base(name, lastName,surname);
    Adres adr;
    adr.base(country, city, streat, house, floor, appartament);

    User user;
    user.base(unikKod+1, fio, number, adr, kard);
    cout << "Данные записаны" << endl;
    user.update(date, user);

}


int main() {
    manu();
    while (_otvet1 != 5){


        if(_otvet1 == 0){//Вернуться в Главное меню
            manu();
        }
        else if(_otvet1 == 1){//Вывод всей БД

            for(int i = 0; i < date.size(); i++){
                string a = date.at(i).getFio().getName();
                cout << a;
            }
            manu();

        }
        else if(_otvet1 == 2){//Поиск по БД
            manuPoisk();
            int otvet2;
            cin >> otvet2;
            if(otvet2 == 0){//Поиск по коду

            }
            else if(otvet2 == 1){//Поиск по ФИО
                cout << "data" << endl;
            }
            else if(otvet2 == 2){//Поиск по номеру телефона
                manuPoisk();

            }
            else if(otvet2 == 3){//Поиск по номеру карты
                cout << "dobav" << endl;
            }
            else if(otvet2 == 4){//Вернуться в меню
                cout << "del" << endl;
            }
            else{//Иное
                cout << "err" << endl;

            }
        }
        else if(_otvet1 == 3){//Добавление элемента
            dobav();
            manu();
        }
        else if(_otvet1 == 4){//Удаление элемента

        }
        else{//Иной ответ


        }
    }
}
