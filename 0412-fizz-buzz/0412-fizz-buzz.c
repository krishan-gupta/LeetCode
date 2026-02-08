/**
 * Note: The returned array must be malloce'd, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    
    char** arr = (char**)malloc(n * sizeof(char*));
    
    for (int i = 0; i < n; i++) {
        int val = i + 1;
        
        if (val % 3 == 0 && val % 5 == 0) {
            arr[i] = "FizzBuzz";
        } else if (val % 3 == 0) {
            arr[i] = "Fizz";
        } else if (val % 5 == 0) {
            arr[i] = "Buzz";
        } else {
            arr[i] = (char*)malloc(12 * sizeof(char));
            sprintf(arr[i], "%d", val);
        }
    }
    
    return arr;
}