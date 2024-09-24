#include <iostream>
#include <cstdlib>  // Dla funkcji system()
#include <string>
#include <fstream>

// Funkcja wyszukująca pakiety w AUR za pomocą RPC
void search_package(const std::string &package_name) {
    std::string command = "curl -s 'https://aur.archlinux.org/rpc/?v=5&type=search&arg=" + package_name + "'";
    std::cout << "Wyszukiwanie pakietu: " << package_name << std::endl;
    system(command.c_str());
}

// Funkcja pobierająca pakiet z AUR za pomocą `git`
void download_package(const std::string &package_name) {
    std::string command = "git clone https://aur.archlinux.org/" + package_name + ".git";
    std::cout << "Pobieranie pakietu: " << package_name << std::endl;
    system(command.c_str());
}

// Funkcja kompilująca i instalująca pakiet przy użyciu makepkg
void build_and_install(const std::string &package_name) {
    std::string command = "cd " + package_name + " && makepkg -si";
    std::cout << "Kompilowanie i instalowanie pakietu: " << package_name << std::endl;
    system(command.c_str());
}

// Funkcja do aktualizacji pakietu (git pull + makepkg)
void update_package(const std::string &package_name) {
    std::string command = "cd " + package_name + " && git pull && makepkg -si";
    std::cout << "Aktualizacja pakietu: " << package_name << std::endl;
    system(command.c_str());
}

int main() {
    int choice;
    std::string package_name;

    std::cout << "=== AUR Helper w C++ ===\n";
    std::cout << "1. Wyszukaj pakiet\n";
    std::cout << "2. Pobierz pakiet i zainstaluj\n";
    std::cout << "3. Zaktualizuj pakiet\n";
    std::cout << "Wybierz opcję: ";
    std::cin >> choice;

    std::cout << "Podaj nazwę pakietu: ";
    std::cin >> package_name;

    switch (choice) {
        case 1:
            search_package(package_name);
            break;
        case 2:
            download_package(package_name);
            build_and_install(package_name);
            break;
        case 3:
            update_package(package_name);
            break;
        default:
            std::cout << "Nieprawidłowa opcja!" << std::endl;
    }

    return 0;
}
