// Tema TV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class TV {
private:
    int height;
    int width;

public:
    // Constructor care initializează membrii clasei, asigurând că înălțimea și lățimea sunt pozitive
    TV(int h, int w) {
        // Verifică și asigură că înălțimea și lățimea sunt pozitive
        if (h < 0 || w < 0) {
            std::cerr << "Eroare: Dimensiunile TV-ului trebuie sa fie pozitive.\n";
            exit(EXIT_FAILURE); // Ieșirea din program în cazul în care dimensiunile sunt negative
        }
        height = h;
        width = w;
    }

    // Metoda pentru calcularea ariei
    int area() {
        return height * width;
    }

    // Metode pentru accesul la înălțime și lățime
    int getHeight() {
        return height;
    }

    int getWidth() {
        return width;
    }

    TV() = default;
};

int main() {
    // Exemplu de utilizare
    TV myTV(20, 24); // Această linie va funcționa normal pentru dimensiunile pozitive
    // TV myTV(-20, 24); // Această linie va genera o eroare în cazul introducerii unor dimensiuni negative
    std::cout << "Inaltimea TV-ului: " << myTV.getHeight() << " inch\n";
    std::cout << "Latimea TV-ului: " << myTV.getWidth() << " inch\n";
    std::cout << "Aria TV-ului: " << myTV.area() << " square inches\n";

    return 0;
}

