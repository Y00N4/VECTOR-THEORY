// TWORZENIE I DODWANIE ELEMENTÓW:
#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> wektor;

    // Dodawanie elementów do wektora
    wektor.push_back(1);
    wektor.push_back(2);
    wektor.push_back(3);

    return 0;
}

// DOSTEP DO ELEMENTÓW WEKTORA:
#include <iostream>
#include <vector>

int main() {
    vector<int> wektor = { 1, 2, 3 };

    // Dostęp do elementów wektora za pomocą operatora indeksowego []
   cout << wektor[0] <<endl;  // Wyświetli 1

    // Dostęp do elementów wektora za pomocą funkcji at()
  cout << wektor.at(1) <<endl;  // Wyświetli 2

    return 0;
}
// ITERACJA PO WEKTORZE: 
#include <iostream>
#include <vector>

int main() {
  vector<int> wektor = { 1, 2, 3 };

    // Iteracja po wektorze za pomocą pętli for-each
    for (const auto& element : wektor) {
        cout << element << endl;
    }

    return 0;
}
// SORTOWANIE WEKTORA: 
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> wektor = { 3, 1, 2 };

    // Sortowanie wektora
    sort(wektor.begin(), wektor.end());

    // Wyświetlanie posortowanego wektora
    for (const auto& element : wektor) {
      cout << element << std::endl;
    }

    return 0;
}

//USUWANIE  ELEMENTU Z WEKTORA: 
#include <iostream>
#include <vector>

int main() {
    std::vector<int> wektor = { 1, 2, 3 };

    // Usuwanie elementu z wektora
    wektor.erase(wektor.begin() + 1);  // Usuwa drugi element

    return 0;
}
//SPRAWDZANIE ROZMIARU WEKTORA I PUSTEGO WEKTORA: 
#include <iostream>
#include <vector>

int main() {
    vector<int> wektor = { 1, 2, 3 };

    // Sprawdzanie rozmiaru wektora
   cout << "Rozmiar wektora: " << wektor.size() << std::endl;

    // Sprawdzanie, czy wektor jest pusty
   if (wektor.empty()) {
       cout << "Wektor jest przychodni." << endl;
       return 0;
   }

