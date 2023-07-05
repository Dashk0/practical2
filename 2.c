#include <stdio.h>
// Функція для обчислення найбільшого спільного дільника (НСД)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Функція для обчислення найменшого спільного кратного (НСК)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, i, numbers[20], result;

    // Зчитування кількості чисел та самі числа
    printf("Введіть кількість чисел (р): ");
    scanf("%d", &n);

    printf("Введіть %d натуральних чисел, розділених пробілом: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Обчислення НСК за допомогою ітерації
    result = numbers[0];
    for (i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    // Виведення результату
    printf("Найменше спільне кратне заданих чисел: %d\n", result);

    return 0;
}