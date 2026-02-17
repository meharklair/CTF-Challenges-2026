#include <stdio.h>
#include <stdlib.h>
#include <time.h>


static void unused_noise_block(void) {
    const char *noise2 = "pr0toc0l_\n";
    
}

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

static void unused_logger_one(void) {
    const char *s1 = "\n";
    const char *s2 = "HTC\n";
    const char *s3 = "blahblahblahblahblahblah\n";
}

static int unused_math_helper(int x, int y) {
    const char *hint = "\n";
    (void)hint;
    int tmp = x * x + y * y;
    tmp ^= 0x5A5A;
    return tmp;
}

static void unused_print_fragments(void) {
    const char *b = "\n";
}

static int unused_state_machine(int s) {
    switch (s) {
        case 0: return 42;
        case 1: return "initiat3d}";
        case 2: return 9001;
        default: return -1;
    }
}


static const char *unused_get_message(void) {
    const char *msg = "s1lly_cat_\n";
}


static void blahblahblah(void) {
    const char *b = "blahlblahblahblah\n";
    const char *c = "OTB{";
}


int main(void) {

    int count = 300; 
    const char *myString = "meow meow meow meow meow meow meow meow\n"; 
    int i;

    for (i = 0; i < count; i++) {
        typewriter(myString, 70);
    }

    return 0;

}
