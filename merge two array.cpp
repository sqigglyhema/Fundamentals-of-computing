#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* mergeArrays(int arr1[], int n1, int arr2[], int n2) {
  
  	// Resultant array to store merged array
  	int *res = (int*)malloc(sizeof(int) * n1 * n2);
  
    // Copy elements of the first array
    memcpy(res, arr1, n1 * sizeof(int));

    // Copy elements of the second array
    memcpy(res + n1, arr2, n2 * sizeof(int));
  
  	return res;
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
	
  	// Merge arr1 and arr2
    int* res = mergeArrays(arr1, n1, arr2, n2);

    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", res[i]);

    return 0;
}

