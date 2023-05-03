#include <iostream>
#include <vector>
#include "User.h"
#include "Adres.h"
#include "FIO.h"



int _otvet1;
int _otvet2;
int _otvet3;

vector<User> date;
int unikKod = 0;
//Функции вывода меню
void Manu(){
    cout << "------Выберите действие------" << endl
    << "(0) Вернуться в меню" << endl
    << "(1) Вывести всю базу данных" << endl
    << "(2) Поиск по базе данных" << endl
    << "(3) Добавить данные" << endl
    << "(4) Удалить данные" << endl
    << "Ответ: ";
    cin >> _otvet1;

}

void ManuPoisk(){
    cout << "------Варианты поиска------" << endl
         << "(0) По коду" << endl
         << "(1) По фамилии" << endl
         << "(2) По номеру телефона" << endl
         << "(3) По номеру карты" << endl
         << "(4) Вернуться в меню" << endl
         << "Ответ: ";
    cin >> _otvet2;
}


void ManuDell(){
    cout << "------Варианты удаления------" << endl
         << "(0) По коду" << endl
         << "(1) По фамилии" << endl
         << "(2) По номеру телефона" << endl
         << "(3) По номеру карты" << endl
         << "(4) Вернуться в меню" << endl
         << "Ответ: ";
    cin >> _otvet3;
}

void VivodUser(int i){
    int kod = date.at(i).getKod();
    string lName = date.at(i).getFio().getLastName();
    string name = date.at(i).getFio().getName();
    string sName = date.at(i).getFio().getSurname();
    string kard = date.at(i).getKard();
    string number = date.at(i).getNumber();
    string country = date.at(i).getAdres().getCountry();
    string city = date.at(i).getAdres().getCity();
    string streat = date.at(i).getAdres().getStreat();
    string house = date.at(i).getAdres().getHouse();
    string floor = date.at(i).getAdres().getFloor();
    string appartament = date.at(i).getAdres().getApartament();
    cout << "----------------------------------" << endl;
    cout << "| " << kod << " | " << lName << " " << name << " "  << sName << endl;
    cout << "----------------------------------" << endl;
    cout << "| " << kard << endl;
    cout << "----------------------------------" << endl;
    cout << "| " << number << endl;
    cout << "----------------------------------" << endl;
    cout << "| " << "Страна: " << country << endl;
    cout << "| " << "Город: " << city << endl;
    cout << "| " << "Улица: " << streat << endl;
    cout << "| " << "Дом: " << house << endl;
    cout << "| " << "Этаж: " << floor << endl;
    cout << "| " << "Квартира: " << appartament << endl;
    cout << "----------------------------------" << endl;
}

void Poisk(vector<User>& d, int a){

    string otv;
    switch (a) {
        case 0:

            cout << "Введите код: ";
            cin >> otv;
            for(int i = 0; i < d.size(); i++){
                if(otv == to_string(d.at(i).getKod())){
                    VivodUser(i);
                }
            }

            Manu();
            break;
        case 1:

            cout << "Введите фамилию: ";
            cin >> otv;

            for(int i = 0; i < d.size(); i++){
                if(otv == d.at(i).getFio().getLastName()){
                    VivodUser(i);
                }
            }

            Manu();
            break;
        case 2:

            cout << "Введите номер телефона: ";
            cin >> otv;

            for(int i = 0; i < d.size(); i++){
                if(otv == d.at(i).getNumber()){
                    VivodUser(i);
                }
            }

            Manu();
            break;
        case 3:

            cout << "Введите номер карты: ";
            cin >> otv;

            for(int i = 0; i < d.size(); i++){
                if(otv == d.at(i).getKard()){
                    VivodUser(i);
                }
            }

            Manu();
            break;
        case 4:


            Manu();
            break;
        default:
            Manu();

    }
}

void Dell(vector<User>& d, int a){
    string otv1;
    switch (a) {
        case 0:
            cout << "Введите код: ";
            cin >> otv1;
            for(int i = 0; i < d.size(); i++){
                if(otv1 == to_string(d.at(i).getKod())){
                    VivodUser(i);
                    int otvV;
                    cout << "Удалить этого пользователя?" << endl;
                    cout << "(0) - Да" << endl;
                    cout << "(1) - Нет" << endl;
                    cout << "Ответ: ";
                    cin >> otvV;

                    if(otvV == 0){
                        d.erase(d.cbegin() + i);
                    }
                    else {
                        break;
                    }

                }
            }
            Manu();
            break;


        case 1:
            cout << "Введите фамилию: ";
            cin >> otv1;

            for(int i = 0; i < d.size(); i++){
                if(otv1 == d.at(i).getFio().getLastName()){
                    VivodUser(i);
                    int otvV;
                    cout << "Удалить этого пользователя?" << endl;
                    cout << "(0) - Да" << endl;
                    cout << "(1) - Нет" << endl;
                    cout << "Ответ: ";
                    cin >> otvV;

                    if(otvV == 0){
                        d.erase(d.cbegin() + i);
                    }
                    else {
                        break;
                    }

                }
            }
            Manu();
            break;
        case 2:
            cout << "Введите номер телефона: ";
            cin >> otv1;

            for(int i = 0; i < d.size(); i++){
                if(otv1 == d.at(i).getNumber()){
                    VivodUser(i);
                    int otvV;
                    cout << "Удалить этого пользователя?" << endl;
                    cout << "(0) - Да" << endl;
                    cout << "(1) - Нет" << endl;
                    cout << "Ответ: ";
                    cin >> otvV;

                    if(otvV == 0){
                        d.erase(d.cbegin() + i);
                    }
                    else {
                        break;
                    }

                }
            }

            Manu();
            break;
        case 3:
            cout << "Введите номер карты: ";
            cin >> otv1;

            for(int i = 0; i < d.size(); i++){
                if(otv1 == d.at(i).getKard()){
                    VivodUser(i);
                    int otvV;
                    cout << "Удалить этого пользователя?" << endl;
                    cout << "(0) - Да" << endl;
                    cout << "(1) - Нет" << endl;
                    cout << "Ответ: ";
                    cin >> otvV;

                    if(otvV == 0){
                        d.erase(d.cbegin() + i);
                    }
                    else {
                        break;
                    }

                }
            }
            Manu();
            break;
        case 4:
            Manu();
            break;
        default:
            Manu();
    }
}

void Dobav(){
    string name, lastName, surname;

    string country, city, streat, house, floor, appartament;

    string number;

    string kard;

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
    unikKod += 1;
    cout << "Данные записаны" << endl;
    user.update(date, user);

}


int main() {
    Manu();

    while(_otvet1 != 5) {
        switch (_otvet1) {
            case 0:


                Manu();
                break;
            case 1:
                cout << "---------База данных---------" << endl;
                for (int i = 0; i < date.size(); i++) {
                    VivodUser(i);
                }
                Manu();
                break;
            case 2:
                ManuPoisk();

                Poisk(date, _otvet2);
                Manu();
                break;
            case 3:
                Dobav();


                Manu();
                break;
            case 4:
                ManuDell();

                Dell(date, _otvet3);
                Manu();

                break;
            default:
                Manu();

        }
    }

    
    return 0;
}
