/*
 * constants.h -- constants in miner
 *
 * author:     QIU Shuang
 * created on: May 28, 2012
 */
#ifndef MINER_CONST_H
#define MINER_CONST_H

#include "types.h"

#define MINER_OK    0

#define MINER_WIN   1
#define MINER_LOSE  0

#define MINER_SCALE_SMALL   0
#define MINER_SCALE_MEDIUM  1
#define MINER_SCALE_LARGE   2
#define MINER_SCALE_NO      3

#define MINER_BOMB_CELL     '*'
#define MINER_EMPTY_CELL    '\0'
#define MINER_DIGGED_CELL   ' '
#define MINER_FLAGED_CELL   'F'
#define MINER_INTEGR_CELL   '#'
#define MINER_MARKED_CELL   '?'

#define MINER_NUM2CHAR_BASE 0x30

/* scale of the game */
extern struct scale game_scales[MINER_SCALE_NO];

#endif              /* MINER_CONST_H */
