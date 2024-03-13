#include <stdio.h>
#include <unistd.h>
#include "sense.h"

#define WHITE 0xFFFF
#define BLACK 0x0000
#define PINK 0x8888
#define RED 0x8000
#define ORANGE 0xFCA0
#define YELLOW 0xFFE0
#define GREEN 0x6666
#define LIGHTBLUE 0x07FF
#define BLUE 0x1111
#define PURPLE 0x801F

int main(void) {
    // getFrameBuffer should only get called once/program
    pi_framebuffer_t *fb=getFrameBuffer();
    sense_fb_bitmap_t *bm=fb->bitmap;


    // letter C
    bm->pixel[1][1]=PURPLE;
    bm->pixel[2][0]=BLUE;
    bm->pixel[3][0]=LIGHTBLUE;
    bm->pixel[4][0]=GREEN;
    bm->pixel[5][0]=YELLOW;
    bm->pixel[6][1]=ORANGE;
    bm->pixel[7][2]=RED;
    bm->pixel[7][3]=RED;
    bm->pixel[7][4]=RED;
    bm->pixel[7][5]=RED;
    bm->pixel[6][6]=ORANGE;
    bm->pixel[5][7]=YELLOW;
    bm->pixel[4][7]=GREEN;
    bm->pixel[3][7]=LIGHTBLUE;
    bm->pixel[2][7]=BLUE;
    bm->pixel[1][6]=PURPLE;

    // clear pixels and pause for 1 second
    sleep(2);
    clearFrameBuffer(fb,BLACK);
    sleep(1);

    // letter O
    bm->pixel[0][2]=PINK;
    bm->pixel[1][1]=PURPLE;
    bm->pixel[2][0]=BLUE;
    bm->pixel[3][0]=LIGHTBLUE;
    bm->pixel[4][0]=GREEN;
    bm->pixel[5][0]=YELLOW;
    bm->pixel[6][1]=ORANGE;
    bm->pixel[7][2]=RED;
    bm->pixel[7][3]=RED;
    bm->pixel[7][4]=RED;
    bm->pixel[7][5]=RED;
    bm->pixel[6][6]=ORANGE;
    bm->pixel[5][7]=YELLOW;
    bm->pixel[4][7]=GREEN;
    bm->pixel[3][7]=LIGHTBLUE;
    bm->pixel[2][7]=BLUE;
    bm->pixel[1][6]=PURPLE;
    bm->pixel[0][5]=PINK;
    bm->pixel[0][4]=PINK;
    bm->pixel[0][3]=PINK;

    // clear pixels and pause for 1 second
    sleep(2);
    clearFrameBuffer(fb,BLACK);
    sleep(1);

    // green shamrock
    bm->pixel[3][0]=GREEN;
    bm->pixel[4][0]=GREEN;
    bm->pixel[2][1]=GREEN;
    bm->pixel[3][1]=GREEN;
    bm->pixel[4][1]=GREEN;
    bm->pixel[5][1]=GREEN;
    bm->pixel[2][2]=GREEN;
    bm->pixel[3][2]=GREEN;
    bm->pixel[4][2]=GREEN;
    bm->pixel[5][2]=GREEN;
    bm->pixel[1][3]=GREEN;
    bm->pixel[3][3]=GREEN;
    bm->pixel[4][3]=GREEN;
    bm->pixel[6][3]=GREEN;
    bm->pixel[0][4]=GREEN;
    bm->pixel[1][4]=GREEN;
    bm->pixel[2][4]=GREEN;
    bm->pixel[3][4]=GREEN;
    bm->pixel[4][4]=GREEN;
    bm->pixel[5][4]=GREEN;
    bm->pixel[6][4]=GREEN;
    bm->pixel[7][4]=GREEN;
    bm->pixel[0][5]=GREEN;
    bm->pixel[1][5]=GREEN;
    bm->pixel[2][5]=GREEN;
    bm->pixel[3][5]=GREEN;
    bm->pixel[4][5]=GREEN;
    bm->pixel[5][5]=GREEN;
    bm->pixel[6][5]=GREEN;
    bm->pixel[7][5]=GREEN;
    bm->pixel[1][6]=GREEN;
    bm->pixel[3][6]=GREEN;
    bm->pixel[4][6]=GREEN;
    bm->pixel[6][6]=GREEN;
    bm->pixel[3][7]=GREEN;
    bm->pixel[4][7]=GREEN;

    // see: man 3 sleep
    sleep(2);
    clearFrameBuffer(fb,BLACK);
    sleep(1);

    // freeFrameBuffer() should only be called once/program
    freeFrameBuffer(fb);
    return 0;
}
