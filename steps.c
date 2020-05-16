#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    int i, steps = 0;
    
    if(argc != 3) {
        printf("No or more than 2 arguments passed\n");
        return -1;
    }
    
    // converting const char * to int
    int N = atoi(argv[1]), K = atoi(argv[2]);
    
    if(K <= 0) {
        printf("%d\n", N);
    } else {
    
        for(i = 1; i <= N; i += (K + 1)) {
            steps++;
            if((i + K) > N) {
                break;
            }
        }
        printf("%d\n", steps);
    
    }
    
    return 0;
}
