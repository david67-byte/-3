#include <cstdio>
int main() {
    int n;

    printf("Введите количество секунд: ");
    scanf("%d", &n);

    int hours = (n / 3600) % 24;
    int minutes = (n % 3600) / 60;
    int seconds = n % 60;

    printf("%d:%02d:%02d\n", hours, minutes, seconds);

    return 0;


}