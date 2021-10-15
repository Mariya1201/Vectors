#include "Header.h"

int main() {


    if (autotest() == 0) {
        CVector v1, v2;
        double a;

        cout << "Dlya prekrasheniya vvoda vvedite bukvu ili slovo \n" << endl;

        cout << "Enter the first vector" << endl;

        cin >> a;
        v1.add(a);
        while (cin.good()) { // Пока не встретилась ошибка чтения. Она произойдет когда введется отличный от double тип данных
            cin >> a;
            if (cin.good()) v1.add(a);
        }

        cout << endl;
        cout << "Enter the second vector" << endl;

        // Очистим поток ввода. Так как у нас в предыдущем цикле в нем образовалась ошибка. Ее надо сбросить
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


        cin >> a;
        v2.add(a);
        while (cin.good()) { 
            cin >> a;
            if (cin.good()) v2.add(a);
        }

        cout << endl;
        cout << "v1 = " << v1 << endl;
        cout << "v2 = " << v2 << endl;

        cout << endl;

        cout << "v1 + v2 = " << (v1 + v2) << endl;
        cout << "v1 - v2 = " << (v1 - v2) << endl;
        cout << "v1 * v2 = " << (v1 * v2) << endl;


        return 0;
    }
    else {
        return 1;
    }


}
