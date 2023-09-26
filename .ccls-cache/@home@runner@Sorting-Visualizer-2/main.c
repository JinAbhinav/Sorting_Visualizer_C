#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ARRAY_SIZE 20

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Bubble Sort algorithm
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                system("clear"); // Clear the console screen
                printArray(arr, size); // Print the updated array
                usleep(100000); // Sleep for a short time to visualize the sorting
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int arr[ARRAY_SIZE];

    // Initialize the array with random values
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 100;
    }

    printf("Original array:\n");
    printArray(arr, ARRAY_SIZE);

    printf("\nSorting...\n");
    bubbleSort(arr, ARRAY_SIZE);

    printf("\nSorted array:\n");
    printArray(arr, ARRAY_SIZE);

    return 0;
}