#include "Header.h"



CVector::CVector() {
    vect = new double[1];
    index = 0;
    vectSize = 1;
   
}

CVector::CVector(const CVector& v) {
        for (int i = 0; i < CVector.index; i++) {
            CVector.vect[i] = v.vect[i];
        }
       
}

CVector::~CVector() {
    // delete[] vect;
    vect = nullptr;
}


void CVector::add(double elem) {
    if (index == vectSize) { // Если количество элементов вектора достигло предела  памяти, это означает,нам нужно выделить больше памяти 
        double* temp = new double[2 * vectSize];

        // Скопируем старый массив в новый и старый удалим
        for (int i = 0; i < vectSize; i++) {
            temp[i] = vect[i];
        }
        delete[] vect;

        vectSize = vectSize * 2;
        vect = temp;
    }

    vect[index] = elem;
    index++;
}



double CVector::get(int i) {
    if (i < index)
        return vect[i];
    return 0;
}


double CVector::operator[](int i) {
    if (i < index)
        return vect[i];
    return 0;
}


CVector CVector::operator+(const CVector& v) {
    CVector newVector;

    if (index == v.index) {
        for (int i = 0; i < index; i++) {
            newVector.add(get(i) + v.vect[i]);
        }
        return newVector;
    }

    else
    {
        cout << "Vectors have different size\n";

        exit(0);

    }
}

CVector& CVector::operator=(const CVector& v) {
    CVector newVector;

    if (index == v.index) {
        for (int i = 0; i < index; i++) {
            newVector.vect[i]= v.vect[i];
        }
        return newVector;
    }

    else
    {
        cout << "Vectors have different size\n";

        exit(0);

    }
}
// Разность векторов /Перегрузка -/
CVector CVector::operator-(const CVector& v) {
    CVector newVector;

    if (index == v.index) {
        for (int i = 0; i < index; i++) {
            newVector.add(get(i) - v.vect[i]);
        }
        return newVector;
    }

    else
    {
        cout << "Vectors have different size";
        exit(0);

    }
}

double CVector::operator*(const CVector& v) {
    double res = 0;

    if (index == v.index) {
        for (int i = 0; i < index; i++) {
            res += get(i) * v.vect[i];
        }

        return res;
    }
    else
    {
        cout << "Vectors have different size";
        exit(0);

    }
   
}


ostream& operator << (ostream& cout, const CVector& v) {
    for (int i = 0; i < v.index; i++)
        cout << v.vect[i] << " ";
    return cout;
}
