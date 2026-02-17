#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  

    time_t now = time(NULL);
    // Make it very predictable: seed = time rounded down to minute
    time_t seed = 1770577200;
    //printf("%d", seed);
    srand((unsigned)seed);

    unsigned char key = rand() & 0xff;

    unsigned char cipher[] = {
    0xae, 0xb9, 0xaa, 0xa7, 0xb9, 0xa4, 0xbd, 0xb1, 0xac, 0xb0, 0xb9,
    0x83, 0xb9, 0xbd, 0xaf, 0xa5, 0x83, 0xa8, 0xb5, 0xb1, 0xb9, 0x83,
    0xba, 0xb0, 0xbd, 0xbb, 0xa1
    };  
    size_t n = sizeof(cipher) / sizeof(cipher[0]);


    unsigned char dec[64];
    for (size_t i = 0; i < n; i++) {
        dec[i] = ((unsigned char)cipher[i]) ^ key;
        printf("%c", dec[i]);
    }
    
}
