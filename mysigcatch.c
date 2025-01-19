#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void sigint_handler(int sig) {
    printf("SIGINT signal caught!\n");
    exit(0);
}

int main() {
    signal(SIGINT, sigint_handler);
    while (1)
    return 0;
}
