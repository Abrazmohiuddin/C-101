#include <stdio.h>

void reverse(int arr[], int n);
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\narray reversed\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

void search(int arr[], int n, int x)
{
    printf("\nenter the key");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("found at %d", i);
            break;
        }
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1;)
    }
}

int main()
{
    int n;
    int x;
    int found = 1;
    int choice;
    printf("enter the size of array");
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d th element", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("the entered array is\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\nenter an option\n");
    printf("1: reverse\n");
    printf("2: search\n");
    printf("3: bubble sort\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        reverse(arr, n);
        break;

    case 2:
        search(arr, n, x);

        break;

    default:
        printf("invalid");

        break;
    }

    return 0;
}
