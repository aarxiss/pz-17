#include <iostream> 
#include <string> 
using namespace std; 
struct Avto { // Оголошення структури "Автомобіль"
    string marka; // Марка автомобіля
    string model; // Модель автомобіля
    int rikVypusku; // Рік випуску автомобіля
    double probih; // Пробіг автомобіля в кілометрах
    static int zagalnaKilkistAvto; // Статична змінна для відстеження загальної кількості автомобілів

    Avto(string m, string mdl, int rik, double pb) { // Спрощений конструктор
        marka = m;
        model = mdl;
        rikVypusku = rik;
        probih = pb;
        zagalnaKilkistAvto++;
    }

    void vyvestyInformaciyu() const { // Метод для виводу інформації про автомобіль
        cout << "Марка: " << marka << endl;
        cout << "Модель: " << model << endl;
        cout << "Рік випуску: " << rikVypusku << endl;
        cout << "Пробіг: " << probih << " км" << endl;
    }
};

int Avto::zagalnaKilkistAvto = 0; // Ініціалізація статичної змінної

int main() {
    Avto avto1("Toyota", "Corolla", 2015, 75000); // Спрощене створення автомобіля
    Avto avto2("Honda", "Civic", 2020, 30000);

    avto1.vyvestyInformaciyu(); // Виведення інформації про перший автомобіль
    cout << endl;
    avto2.vyvestyInformaciyu(); // Виведення інформації про другий автомобіль

    cout << "Загальна кількість автомобілів у парку: " << Avto::zagalnaKilkistAvto << endl; // Виведення загальної кількості автомобілів

    return 0;
}
