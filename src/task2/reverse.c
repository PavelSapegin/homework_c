#include <stdio.h>

int main()
{
    int m, n;
    printf("Введите длину отрезков m и n: ");
    scanf("%d %d", &m, &n);

    int arr[m + n];

    printf("Исходный массив: ");

    for (int i = 0; i < m + n; ++i)
    {
        arr[i] = i;
        printf("%d ", arr[i]);
    }

    // нужно переставить начало длинной m в конец
    for (int i = 0; i < m; ++i)
    {

        int first = arr[0]; // запоминаем первый эл-т,
                            // который пойдет в конец
        for (int j = 0; j < m + n - 1; ++j)
        {
            arr[j] = arr[j + 1]; // сдвигаем все эл-ты на один влево
        }
        arr[m + n - 1] = first; // перемещаем первый эл-т в конец
    }

    printf("\nПеревернутый массив: ");

    for (int i = 0; i < m + n; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
