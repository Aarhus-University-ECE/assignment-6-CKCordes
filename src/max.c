#include <stdio.h>
#include <assert.h>


int max(int* numbers, int size)
{
    //Pre-condition
    assert(size > 0);
    /* Variable for storing the maximum value of the array
    Initialised as the first to make sure it checks all nums.*/
    int max = numbers[0];
    for(int i = 1; i < size; i++){
        // Checks if the actual number is the largest
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}