#pragma once
#ifndef CVECTOR_H
#define CVECTOR_H

class CVector {
private:
    double* vect;
    int vectSize; // ����� ����� ������, ���������� ��� �������
    int index; // ������ �� ������� ������������ ���������� ������� (����� ������� �� ������ ������)

public:

    CVector(); 
    ~CVector();

    void add(double elem); // ��������� ������� � ����� �������
 
    int getSize(); // ����� �������
    double get(int i); // �������� ������� ������� �� �������
    double operator[](int i); // �������� [], ����� ���������� � ��������� �������, ��� � ��������� �������

    CVector operator+(const CVector&); 
    CVector operator-(const CVector&); 
    double operator*(const CVector&); 

    friend ostream& operator << (ostream&, const CVector&);
};

#endif