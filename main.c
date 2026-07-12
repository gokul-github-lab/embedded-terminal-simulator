#include <stdio.h>
#include <string.h>
#include "commands.h"

int main() {

    // Stores the command entered by the user.
    char command[20];

    // Stores the return value from terminal().
    int status;

    printf("Embedded Terminal v1.0\n");

    while (1) {

        printf("> ");

        // Read user input.
        fgets(command, sizeof(command), stdin);

        // Remove the newline character added by fgets().
        command[strcspn(command, "\n")] = '\0';

        // Process the command.
        status = terminal(command);

        // Exit the terminal if terminal() returns 1.
        if (status == 1) {
            break;
        }
    }

    return 0;
}
