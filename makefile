# Definiowanie zmiennych
CC = g++
CFLAGS = -Wall -Wextra -std=c++11
TARGET = hayu

# Źródła
SOURCES = hayu.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Domyślna reguła
all: $(TARGET)

# Reguła do kompilacji plików źródłowych na obiekty
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Reguła do linkowania obiektów w plik wykonywalny
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

# Reguła do czyszczenia plików
clean:
	rm -f $(TARGET) $(OBJECTS)

# Reguła do instalacji (jeśli wymagana)
install: $(TARGET)
	@echo "Instalacja hayu..."
	# Tu możesz dodać komendy do instalacji

.PHONY: all clean install
