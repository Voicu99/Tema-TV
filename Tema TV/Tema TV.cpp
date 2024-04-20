// Tema TV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class TV {
private:
    int height;
    int width;

public:
    // Constructorul care initializeaza membrii clasei
    TV(int h, int w) : height(h), width(w) {}

    // Metoda pentru calcularea ariei
    int area() {
        return height * width;
    }

    // Metode pentru accesul la inaltime si latime
    int getHeight() {
        return height;
    }

    int getWidth() {
        return width;
    }
};

int main() {
    // Exemplu de utilizare
    TV myTV(20, 24);
    std::cout << "Inaltimea TV-ului: " << myTV.getHeight() << " inch\n";
    std::cout << "Latimea TV-ului: " << myTV.getWidth() << " inch\n";
    std::cout << "Aria TV-ului: " << myTV.area() << " square inches\n";

    return 0;
}
