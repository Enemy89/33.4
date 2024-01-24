#include <iostream>

// Шаблонная функция для ввода массива
template <typename T>
void input(T (&array)[8]) {
    std::cout << "Fill the array (8): ";
    for (size_t i = 0; i < 8; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> array[i];
    }
}

// Шаблонная функция для подсчета среднего арифметического
template <typename T>
T calculateAverage(const T (&array)[8]) {
    T sum = 0;
    for (size_t i = 0; i < 8; ++i) {
        sum += array[i];
    }
    return sum / static_cast<T>(8);
}

int main() {
    // Массив целых чисел
    int intArray[8];
    input(intArray);
    int intAverage = calculateAverage(intArray);
    std::cout << "Average: " << intAverage << std::endl;

    // Массив чисел с плавающей точкой
    double doubleArray[8];
    input(doubleArray);
    double doubleAverage = calculateAverage(doubleArray);
    std::cout << "Average: " << doubleAverage << std::endl;
}
