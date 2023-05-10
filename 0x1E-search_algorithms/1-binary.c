#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers using the Binary search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    size_t l = 0;
    size_t r = size - 1;
    while (l <= r) {
        size_t m = (l + r) / 2;
        if (array[m] == value) {
            return m;
        } else if (array[m] < value) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return -1;
}
