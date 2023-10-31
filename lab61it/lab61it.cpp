#include <iostream>
#include <cstdlib>
#include <ctime>

// Функція для генерації випадкового числа в заданому діапазоні
int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Функція для створення масиву з випадковими числами
void createRandomArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = generateRandomNumber(3, 92);
    }
}

// Функція для виведення масиву на екран
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

// Функція для обчислення кількості та суми елементів, які задовольняють критерію
void calculateCountAndSum(const int arr[], int size, int& count, int& sum) {
    count = 0;
    sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0 || i % 7 == 0) {
            count++;
            sum += arr[i];
        }
    }
}

// Функція для заміни елементів, які задовольняють критерію, на нулі
void replaceWithZeros(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0 || i % 7 == 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    const int size = 26;
    int randomArray[size];

    createRandomArray(randomArray, size);
    std::cout << "Random array: ";
    printArray(randomArray, size);

    int count, sum;
    calculateCountAndSum(randomArray, size, count, sum);
    std::cout << "Count of elements satisfying the criteria: " << count << std::endl;
    std::cout << "Sum of elements satisfying the criteria: " << sum << std::endl;

    replaceWithZeros(randomArray, size);
    std::cout << "Modified array: ";
    printArray(randomArray, size);

    return 0;
}
