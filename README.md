# hayu - AUR Helper w C++

Hayu to prosty AUR helper napisany w C++, który ułatwia zarządzanie pakietami z Arch User Repository. Umożliwia wyszukiwanie, pobieranie i instalowanie pakietów oraz ich aktualizację.

## Spis treści
- [Funkcjonalności](#funkcjonalności)
- [Wymagania](#wymagania)
- [Instalacja](#instalacja)
- [Użycie](#użycie)
- [Przykład](#przykład)
- [Kontrybucja](#kontrybucja)
- [Licencja](#licencja)

## Funkcjonalności
- Wyszukiwanie pakietów w AUR
- Pobieranie i instalacja pakietów
- Aktualizacja zainstalowanych pakietów

## Wymagania
- Arch Linux (albo jakieś distro oparte na archu)
- C++ Compiler (g++)
- [make](https://www.gnu.org/software/make/)
- [curl](https://curl.se/)

## Instalacja
1. Skopiuj repozytorium na swój komputer:
    ```bash
    git clone https://github.com/yourusername/hayu.git
    cd hayu
    ```

2. Skorzystaj z `make`, aby zbudować projekt:
    ```bash
    make
    ```

3. (Opcjonalnie) Zainstaluj program:
    ```bash
    make install
    ```

## Użycie
Po zbudowaniu i (opcjonalnie) zainstalowaniu programu, możesz uruchomić `hayu` w terminalu. Wybierz jedną z opcji:
1. Wyszukiwanie pakietu
2. Pobranie i zainstalowanie pakietu
3. Aktualizacja pakietu

Przykład użycia:
```bash
./hayu
