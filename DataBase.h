//
// Created by Karol Perkowski on 27/11/2020.
//

#ifndef ZALICZENIE_DATABASE_H
#define ZALICZENIE_DATABASE_H
#include "DaneOso.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
class DataBase {
private:
    std::vector<DaneOso> m_data;
    const std::string m_filename{"data.txt"};

public:
    void print_data();
    void add(const DaneOso &oso);
    void delete_data();
    void get_data_from_file();
    void dump_data_to_file();
};


#endif//ZALICZENIE_DATABASE_H
