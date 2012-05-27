/*
 * main.c -- entrance to the CLI miner game
 *
 * author:     QIU Shuang
 * created on: May 27, 2012
 */


#include "constants.h"
#include "types.h"

/* TODO */
/* Initialize scale of game */
struct scale game_scales = {
        {.width= , .height= , },        /* small scale  */
        {.width= , .height= , },        /* medium scale */
        {.width= , .height= , }         /* large scale  */
    };

int main(int argc, char **argv) {
    int error_code = MINER_OK;

    int game_scale = MINER_SCALE_SMALL; /* scale of the chess board *
                                         * small by default         */

    return error_code;
}
