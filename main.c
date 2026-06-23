#include <stdio.h>
#include <string.h>

int main() {
    char command[100];
    printf("Embedded Terminal v1.0\n");
    while (1) {
        printf("> ");
        scanf("%99s", command);
        if (strcmp(command, "exit") == 0) {
            printf("Closing terminal...\n");
            break;
        }
    }
    return 0;
}
