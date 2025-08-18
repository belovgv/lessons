#define MAX_SIZE 1000

int main(void) {
    int arr[MAX_SIZE];
    int n = 0;
    int num;
    int has_minus_one = 0;

    // Считываем последовательность с помощью for
    for (; n < MAX_SIZE; n++) {
        if (scanf("%d", &num) != 1) {
            printf("n/a");
            return 0;
        }
        
        if (num == -1) {
            has_minus_one = 1;
            break;
        }
        
        if (num < 0) {
            printf("n/a");
            return 0;
        }
        
        arr[n] = num;
    }

    // Проверка на пустую последовательность или отсутствие -1
    if (n == 0 || !has_minus_one) {
        printf("n/a");
        return 0;
    }

    // Находим индексы первых min и max
    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) min_idx = i;
        if (arr[i] > arr[max_idx]) max_idx = i;
    }

    // Меняем местами
    int temp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = temp;

    // Вывод без лишнего пробела и перевода строки
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }

    return 0;
}