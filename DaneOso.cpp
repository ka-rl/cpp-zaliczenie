//
// Created by Karol Perkowski on 27/11/2020.
//

#include "DaneOso.h"
DaneOso::DaneOso(const std::string &imie, const std::string &nazwisko, int wiek) : m_imie{imie}, m_nazwisko{nazwisko}, m_wiek{wiek} {}
std::ostream &operator<<(std::ostream &os, const DaneOso &oso) {
    os << oso.m_imie << " " << oso.m_nazwisko << " " << oso.m_wiek;
    return os;
}
std::istream &operator>>(std::istream &is, DaneOso &oso) {
    is >> oso.m_imie;
    is >> oso.m_nazwisko;
    is >> oso.m_wiek;
    return is;
}

DaneOso create_DaneOso_from_user() {
    std::string imie;
    std::string naziwsko;
    int wiek;
    std::cout << "Podaj imie: ";
    std::cin >> imie;
    std::cout << "Podaj nazwisko: ";
    std::cin >> naziwsko;
    std::cout << "Podaj wiek: ";
    std::cin >> wiek;
    return DaneOso(imie, naziwsko, wiek);
}
