#include <string.h>

int finalValueAfterOperations(char** operations, int operationsSize) {
    int x = 0;
    char **arr = operations; 
    
    for(int i = 0; i < operationsSize; i++) {
        if(strcmp(*(arr + i), "++X") == 0) {
            x += 1;
        } else if(strcmp(*(arr + i), "X++") == 0) {
            x += 1;
        } else if(strcmp(*(arr + i), "--X") == 0) {
            x -= 1;
        } else if(strcmp(*(arr + i), "X--") == 0) {
            x -= 1;
        }
    }
    return x;
}