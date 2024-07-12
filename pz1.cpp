#include <iostream>
    int main() {
        int n;
        std::cout << "Vvedite kolichestvo chisel posledovatelnosti: "; 
        std::cin >> n; //Ввод кол-ва чисел
        double summa = 0.0;
        for (int i = 0; i < n; i++) { 
            int num;
            std::cout << "Vvedite " << i + 1 << "-e chislo: ";
            std::cin >> num;
            summa += num;
        }
        double average = summa / n;
        std::cout << "Srednee arifm: " << average << std::endl;
        return 0;
    } 
