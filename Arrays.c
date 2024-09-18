#include <stdio.h>

int main() {
    // Declare an array to store 5 integers
    int userIntegers[5];

    // Accept 5 integers from the user and store them in the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &userIntegers[i]);
    }

    // Display the entered integers
    printf("\nYou entered the following integers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", userIntegers[i]);
    }

    // Calculate and display the sum and average of the elements in the array
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += userIntegers[i];
    }

    float average = (float)sum / 5;

    // Calculate and display the largest and smallest elements in the array
    int dako = userIntegers[0];  
    int gamay = userIntegers[0]; 

    for (int i = 1; i < 5; ++i) {
        if (userIntegers[i] > dako) {
            dako = userIntegers[i];
        }
        if (userIntegers[i] < gamay) {
            gamay = userIntegers[i];
        }
    }

    // Displaying the results
    printf("\n\nResults:\n");
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);
    printf("Largest element: %d\n", dako);
    printf("Smallest element: %d\n", gamay);

    return 0;
}

