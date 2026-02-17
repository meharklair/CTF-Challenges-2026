#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define FLAG "HTCOTB{l0v3_transcends_tIme}"

void delay_ms(int ms) {
    clock_t start = clock();
    while ((clock() - start) * 1000 / CLOCKS_PER_SEC < ms);
}

void typewriter(const char *text, int delay_s) {
    for (int i = 0; text[i] != '\0'; i++) {
        putchar(text[i]);
        fflush(stdout);
        delay_ms(delay_s);
    }
}
int main(void) {

    typewriter("The Wizard has stolen your valentine's heart!!\n", 50);
    delay_ms(500);
    typewriter("WIZARD: HAHA GET PRANKED I LOCKED THEIR HEART IN A TIME CAPSULE AND YOU CAN NEVER GET IT BACK\n", 50);
    delay_ms(500);
    typewriter("The Wizard then does a sick backflip and jumps out the window\n", 50);
    delay_ms(500);
    typewriter("WIZARD: see you later chud loser lol\n", 50);
    delay_ms(500);
    typewriter("But as he is jumping out the window a piece of paper falls out of his robe\n", 50);
    delay_ms(500);

    size_t n = sizeof(FLAG) - 1;

    time_t now = time(NULL);
    time_t seed = (now / 60) * 60;
    //printf("%d", seed);
    srand((unsigned)seed);

    unsigned char key = rand() & 0xff;

    unsigned char enc[64];
    for (size_t i = 0; i < n; i++) {
        enc[i] = ((unsigned char)FLAG[i]) ^ key;
    }

    typewriter("cool wizard secret = ", 50);
    for (size_t i = 0; i < n; i++) {
        printf("%02x", enc[i]);
        fflush(stdout);
        delay_ms(100);
    }
    printf("\n");
}
