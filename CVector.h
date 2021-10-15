#pragma once
#ifndef CVECTOR_H
#define CVECTOR_H

class CVector {
private:
    double* vect;
    int vectSize; // Общий объем памяти, выделенной для вектора
    int index; // Индекс на котором остановилось заполнение вектора (длина вектора на данный момент)

public:

    CVector(); 
    ~CVector();

    void add(double elem); // Добавляет элемент в конец вектора
 
    int getSize(); // Длина вектора
    double get(int i); // Получить элемент вектора по индексу
    double operator[](int i); // Оператор [], чтобы обращаться к элементам вектора, как к элементам массива

    CVector operator+(const CVector&); 
    CVector operator-(const CVector&); 
    double operator*(const CVector&); 

    friend ostream& operator << (ostream&, const CVector&);
};

#endif