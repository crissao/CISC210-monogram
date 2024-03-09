#include <stdio.h>
#include <unistd.h>
#include "sense.h"

#define WHITE 0xFFFF

int main(void) {
    // getFrameBuffer should only get called once/program
    pi_framebuffer_t *fb=getFrameBuffer();
    sense_fb_bitmap_t *bm=fb->bitmap;


    // letter C
    bm->pixel[0][1]=WHITE;
    bm->pixel[1][0]=WHITE;
    bm->pixel[2][0]=WHITE;
    bm->pixel[3][0]=WHITE;
    bm->pixel[4][0]=WHITE;
    bm->pixel[5][0]=WHITE;
    bm->pixel[6][1]=WHITE;
    bm->pixel[7][2]=WHITE;
    bm->pixel[7][3]=WHITE;
    bm->pixel[7][4]=WHITE;
    bm->pixel[7][5]=WHITE;
    bm->pixel[6][6]=WHITE;
    bm->pixel[5][7]=WHITE;
    bm->pixel[4][7]=WHITE;
    bm->pixel[3][7]=WHITE;
    bm->pixel[2][7]=WHITE;
    bm->pixel[1][7]=WHITE;
    bm->pixel[0][6]=WHITE;


    // see: man 3 sleep
    sleep(2);
    // freeFrameBuffer() should only be called once/program
    freeFrameBuffer(fb);
    return 0;
}
