#include "DataBase.h"
#include "Menu.h"
int main() {
    Menu menu{};
    DataBase data{};
    for (;;) {
        menu.print_menu();
        menu.set_choice();
        switch (menu.get_choice()) {
            case 1:
                data.print_data();
                break;
            case 2:
                data.add(create_DaneOso_from_user());
                break;
            case 3:
                data.delete_data();
                break;
            case 4:
                data.get_data_from_file();
                break;
            case 5:
                data.dump_data_to_file();
                break;
            case 6:
                return 0;
            default:
                std::cout << "Nie ma takiej opcji \n";
                break;
        }
    }
}
