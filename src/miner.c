/*
 * miner->c -- implementation of miner
 *
 * author:     QIU Shuang
 * created on: May 27, 2012
 */

/* access game board at row r, column c *
 * r and c should be in board range     */
cell access_board(board *game_board, int r, int c) {
    cell c = MINER_EMPTY_CELL;

    if ((game_board) &&
        (c < game_board->s->width) &&
        (r < game_board->s->height)) {
        c = game_board->d[r * game_board->s->width + c];
    }

    return c;
}

/* set value at game board row r, column c *
 * r and c should be in board range        */
void set_board(board *game_board, int r, int c, cell v) {
    if ((game_board) &&
        (c < game_board->s->width) &&
        (r < game_board->s->height)) {
        game_board->d[r * game_board->s->width + c] = v;
    }
}

/* generate hints */
void hint_gen(board *game_board) {
    if (game_board) {
        int width  = game_board->s->width;
        int height = game_board->s->height;

        int i, j;
        for (i = 1; i <= height; i++) {
            for (j = 1; j <= width; j++) {
                
            }
        }
    }
}
