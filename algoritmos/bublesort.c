#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    // laço para percorrer o vetor até o penultimo elemento
    for (int i = 0; i < n - 1; i++)
    {  // laço para percorrer o 
        for (int j = 0; j < n - i - 1; j++)
        {    // troca se o elemento atual for maior que o próximo
            if (arr[j] > arr[j + 1])
            {   // variavel temporaria recebe o elemento atual na posição j
                int temp = arr[j];
                // elemento atual na posição j recebe o próximo
                arr[j] = arr[j + 1];
                // elemento na posição j+1 recebe o temporario
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Tamanho do vetor ");
    scanf("%d", &n);

    int arr[n];
    printf("Entre com %d elementos:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}