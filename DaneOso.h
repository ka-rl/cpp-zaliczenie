//
// Created by Karol Perkowski on 27/11/2020.
//

#ifndef ZALICZENIE_DANEOSO_H
#define ZALICZENIE_DANEOSO_H
#include <iostream>
#include <ostream>
#include <string>

class DaneOso {
private:
    std::string m_imie;
    std::string m_nazwisko;
    int m_wiek{};

public:
    DaneOso() = default;
    DaneOso(const std::string &imie, const std::string &nazwisko, int wiek);
    friend std::ostream &operator<<(std::ostream &os, const DaneOso &oso);
    friend std::istream &operator>>(std::istream &is, DaneOso &oso);
};
DaneOso create_DaneOso_from_user();

#endif//ZALICZENIE_DANEOSO_H
