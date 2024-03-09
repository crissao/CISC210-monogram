#include <stdio.h>
#include "sense.h"

#define BLACK 0x0000

int main(void) {
    pi_framebuffer_t *fb=getFrameBuffer();
    clearFrameBuffer(fb,BLACK);
    sleep(1);
    freeFrameBuffer(fb);
    return 0;
}
