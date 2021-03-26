//
// Created by Karol Perkowski on 27/11/2020.
//

#include "DataBase.h"


void DataBase::print_data() {
    for (auto &oso : m_data) {
        std::cout << oso << '\n';
    }
}
void DataBase::add(const DaneOso &oso) {
    m_data.push_back(oso);
}
void DataBase::delete_data() {
    m_data.erase(m_data.begin(), m_data.end());
}

void DataBase::get_data_from_file() {
    std::ifstream file;
    file.open(m_filename.c_str(), std::ios::in);
    if (file.is_open()) {
        if (file.peek() == std::ifstream::traits_type::eof()) {
            std::cout << "WARNING: Plik jest pusty!\n";
            return;
        }
        while (!file.eof()) {
            DaneOso oso = DaneOso();
            file >> oso;
            m_data.push_back(oso);
        }
        std::cout << "Dane wczytane \n";
    } else {
        std::cout << "ERROR: Nie udało otworzyć się pliku!\n";
    }
}

void DataBase::dump_data_to_file() {
    std::ofstream file(m_filename.c_str());
    if (file.is_open()) {
        for (const auto &oso : m_data) {
            file << oso;
        }
        file.close();
        std::cout << "Dane zapisane\n";
    } else {
        std::cout << "ERROR: Nie udało otworzyć się pliku!\n";
    }
}
