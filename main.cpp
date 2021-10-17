#include "Header.h"

int main() {


    if (autotest() == 0) {
        CVector v1, v2;
        double a;
        int q, w;

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

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << endl;
        cout << "v1 = " << v1 << endl;
        cout << "v2 = " << v2 << endl;

        cout << endl;

        cout << "v1 + v2 = " << (v1 + v2) << endl;
        cout << "v1 - v2 = " << (v1 - v2) << endl;
        cout << "v1 * v2 = " << (v1 * v2) << endl;

        cout << "Do you want to add coordinates ?  yes -0, no-1\n" << endl;
        cin >> q;
        if (q == 0) {
            cout << " Wich vector do you want to change 1 or 2?" << endl;
            cin >> w;
            cout << "add coordinates\n" << endl;
            if (w == 1) {
                cin >> a;
                v1.add(a);
                while (cin.good()) { // Пока не встретилась ошибка чтения. Она произойдет когда введется отличный от double тип данных
                    cin >> a;
                    if (cin.good()) v1.add(a);
                }
                cout << "v1 = " << v1 << endl;
                cout << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            if (w == 2) {

                cin >> a;
                v2.add(a);
                while (cin.good()) { // Пока не встретилась ошибка чтения. Она произойдет когда введется отличный от double тип данных
                    cin >> a;
                    if (cin.good()) v2.add(a);
                }
                cout << "v2 = " << v2 << endl;
                cout << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        else {
            return 0;
        }
        return 0;
    }
    else {
        return 1;
    }


}
