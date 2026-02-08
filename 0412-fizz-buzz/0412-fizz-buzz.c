/**
 * Note: The returned array must be malloce'd, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    // 1. Tell the caller how many strings we are returning
    *returnSize = n;
    
    // 2. Allocate memory for 'n' pointers to strings
    char** arr = (char**)malloc(n * sizeof(char*));
    
    for (int i = 0; i < n; i++) {
        int val = i + 1;
        
        // 3. Check conditions and allocate specific space for each string
        if (val % 3 == 0 && val % 5 == 0) {
            arr[i] = strdup("FizzBuzz");
        } else if (val % 3 == 0) {
            arr[i] = strdup("Fizz");
        } else if (val % 5 == 0) {
            arr[i] = strdup("Buzz");
        } else {
            // 4. For numbers, we need a buffer large enough for the digits
            // A 12-byte buffer is safe for any 32-bit integer
            arr[i] = (char*)malloc(12 * sizeof(char));
            sprintf(arr[i], "%d", val);
        }
    }
    
    return arr;
}