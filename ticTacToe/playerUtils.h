
/**
 * Prompts the (human) player for a valid move and
 * updates the game board.  Which player (X or O)
 * is indicated by the given player.
 */
void userMove(Move **board, Move player);

/**
 * Makes a random move on the given board
 * The computer player is always assumed to be O
 */
void randomComputerMove(Move **board);

int numWinningCombos(Move **board, Move nextMove);
void smartComputerMove(Move **board);
void findBestMove(Move **board, int *row, int *col);
