//
// Created by Karol Perkowski on 27/11/2020.
//

#include "Menu.h"
void Menu::print_menu() {
    for (auto &option : m_options) {
        std::cout << option << '\n';
    }
}
int Menu::get_choice() const {
    return m_choice;
}
void Menu::set_choice() {
    std::cout << "Wybierz opcje z menu: ";
    std::cin >> m_choice;
}
