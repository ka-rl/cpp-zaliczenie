//
// Created by Karol Perkowski on 27/11/2020.
//

#ifndef ZALICZENIE_MENU_H
#define ZALICZENIE_MENU_H
#include <array>
#include <iostream>
#include <string>

class Menu {
private:
    const std::array<std::string, 6> m_options = {"1. Wypisanie bazy", "2. Dodwanie elementu do bazy", "3. Skasowanie bazy", "4. Wczytanie z pliku", "5. Zapisanie do pliku", "6. Exit"};
    int m_choice{-1};

public:
    void print_menu();
    int get_choice() const;
    void set_choice();
};


#endif//ZALICZENIE_MENU_H
