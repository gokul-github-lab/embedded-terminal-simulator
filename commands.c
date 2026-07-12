#include <stdio.h>
#include <string.h>

// Stores all previously executed commands.
char history[100];

// LED state (0 = OFF, 1 = ON)
int ledState = 0;

// Current position in the history array.
int historyIndex = 0;

// Simulated temperature value.
int temperature = 25;

/*---------------------------------------------------------
 * Generates a simulated temperature.
 * Temperature cycles between 25°C and 45°C.
 *---------------------------------------------------------*/
int getTemperature() {

    if (temperature >= 25 && temperature <= 45) {
        temperature++;
    }
    else {
        temperature = 25;
    }

    return temperature;
}

/*---------------------------------------------------------
 * Stores a command into the history buffer.
 * Clears the history if the buffer becomes full.
 *---------------------------------------------------------*/
void storeHistory(char command[]) {

    int length = strlen(command);

    if (length + historyIndex < 99) {

        for (int i = 0; i < length; i++) {
            history[historyIndex] = command[i];
            historyIndex++;
        }

        history[historyIndex] = '\n';
        historyIndex++;
    }
    else {

        printf("History full..! Clearing...\n");

        historyIndex = 0;

        for (int i = 0; i < 100; i++) {
            history[i] = '\0';
        }
    }
}

/*---------------------------------------------------------
 * Processes terminal commands.
 *
 * Returns:
 *      1 -> Exit terminal
 *      0 -> Continue execution
 *---------------------------------------------------------*/
int terminal(char command[]) {

    if (strcmp(command, "exit") == 0) {

        printf("Closing terminal...\n");
        return 1;
    }

    else if (strcmp(command, "help") == 0) {

        printf("Available commands\nhelp\nled on\nled off\nstatus\ntemp\nhistory\nexit\n");

        storeHistory(command);
        return 0;
    }

    else if (strcmp(command, "led on") == 0) {

        ledState = 1;

        printf("LED ON\n");

        storeHistory(command);
        return 0;
    }

    else if (strcmp(command, "led off") == 0) {

        ledState = 0;

        printf("LED OFF\n");

        storeHistory(command);
        return 0;
    }

    else if (strcmp(command, "status") == 0) {

        if (ledState == 1)
            printf("LED ON\n");
        else
            printf("LED OFF\n");

        storeHistory(command);
        return 0;
    }

    else if (strcmp(command, "temp") == 0) {

        printf("%d C\n", getTemperature());

        storeHistory(command);
        return 0;
    }

    else if (strcmp(command, "history") == 0) {

        printf("%s\n", history);

        return 0;
    }

    else {

        printf("Unknown command\n");

        return 0;
    }
}
