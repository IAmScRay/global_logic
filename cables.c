#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    int i, length = 0;
    
    if(argc != 3) {
        printf("No or more than 2 arguments passed\n");
        return -1;
    }
    
    int N = atoi(argv[1]), D = atoi(argv[2]);
    
    for(i = 1; i <= N; i++) {
        length += i * D;
    }
    
    printf("%d\n", length);

    return 0;
}
