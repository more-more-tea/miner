/*
 * miner.h -- header file for miner
 *
 * author:     QIU Shuang
 * created on: May 27, 2012
 */
#ifndef MINER_H
#define MINER_H

/* access game board at row r, column c *
 * r and c should be in board range     */
cell access_board(board *game_board, int r, int c);

/* set value at game board row r, column c *
 * r and c should be in board range        */
void set_board(board *game_board, int r, int c, cell v);

/* generate hints */
void hint_gen(board *game_board);

#endif              /* MINER_H */
