#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main(void) {
    // Song lyrics - the NULL at the end is required to stop the for loop
    char *lyrics[] = {
        "THE", "DAY", "I", "KILL", "MYSELF", "I'LL", "STREAM", "MYSELF", 
        "AND", "THEY'LL", "POST", "IT", "ONLINE", "MOST", "DAYS", "I", 
        "FEEL", "LIKE", "SHIT", "IVE", "BEEN", "LIKE", "THIS", "CAN", 
        "I", "GET", "OUT", "MY", "MIND", "I'M", "FEELING", "AWFUL", 
        "WHEN", "I", "TALKING", "DO", "I", "ALWAYS", "WASTE", "HER", "TIME", 
        NULL
    };
    
    // Precise timings in microseconds (1,000,000 us = 1 second)
    int delays[] = {
        604000,   // THE
        124500,   // DAY
        200000,   // I
        266000,   // KILL
        409800,   // MYSELF
        230000,   // I'LL
        400980,   // STREAM
        450000,   // MYSELF
        250000,   // AND
        390000,   // THEY'LL
        300000,   // POST
        400000,   // IT
        520000,   // ONLINE
        480000,   // MOST
        200000,   // DAYS
        300000,   // I
        400000,   // FEEL
        400000,   // LIKE
        300000,   // SHIT
        400000,   // IVE
        400000,   // BEEN
        200000,   // LIKE
        400000,   // THIS
        250000,   // CAN
        190000,   // I
        300000,   // GET
        300000,   // OUT
        200000,   // MY
        400000,   // MIND
        200000,   // I'M
        500000,   // FEELING
        400000,   // AWFUL
        350000,   // WHEN
        300000,   // I
        500000,   // TALKING
        200000,   // DO
        300000,   // I
        400000,   // ALWAYS
        300000,   // WASTE
        250000,   // HER
        2000000   // TIME
    };
    
    char command[256];
    struct winsize w;

    for (int i = 0; lyrics[i] != NULL; i++) {
        
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

        printf("\033[H\033[J");

        sprintf(command, "figlet -c -w %d \"%s\"", w.ws_col, lyrics[i]);

        system(command);

        usleep(delays[i]);
    }

    printf("\033[H\033[J");

    return 0;
}
