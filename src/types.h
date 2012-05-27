/*
 * types.h -- define types used
 *
 * author:     QIU Shuang
 * created on: May 28, 2012
 */
#ifndef MINER_TYPES_H
#define MINER_TYPES_H

typedef cell char;  /* define cell type */

/* scale of the game */
struct scale {
    int width;      /* width of the board */
    int height;     /* height of the board */
    int bombs;      /* number of bombs in the board */
};

/* game board, including scale and data */
struct board {
    struct scale *s;          /* scale of the board */
    cell         *d;          /* chess board data   */
};

#endif              /* MINER_TYPES_H */
