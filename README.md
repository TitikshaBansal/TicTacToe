# Console-Based Tic-Tac-Toe Game

## Introduction
This repository contains the source code for a console-based Tic-Tac-Toe game. The game is designed to be played by two players taking turns to mark their respective symbols on a 3x3 grid. The objective is to align three of one's own symbols horizontally, vertically, or diagonally while preventing the opponent from doing the same.

## Features
- **3x3 Grid Game Board**: A simple yet functional game board.
- **Two Player Mode**: Game logic that allows two players to compete against each other.
- **Dynamic Board Display**: Real-time updating of the game board after each move.
- **Player Input Validation**: Checks and prompts for correct input format.
- **Win Condition Check**: Determines the winner based on the current state of the board.
- **Draw Condition Check**: Identifies a tie if all spaces are filled without a winner.
- **Turn Switching**: Alternates turns between players.
- **Result Display**: Announces the winner or declares a draw at the end of the game.
- **Replay Option**: Allows players to start a new game after the current game ends.

## Game Mechanics
- The game board is a 3x3 grid initialized with 'I' to indicate an empty cell.
- Two players are assigned symbols 'X' and 'O'.
- The game prompts each player to input their move in a [row column] format.
- After each move, the game board is updated and displayed.
- The game checks for a win or draw after each move.
- If a player wins, the game announces the winner and offers a rematch.
- The game also handles invalid moves and prevents overwriting on the board.

## Code Structure
- `checkIfWin()`: Checks if the latest move resulted in a win by evaluating rows, columns, and diagonals.
- `nextTurn()`: Handles the logic for each player's turn, updates the board, and checks for a win or draw.
- `main()`: Initializes the game, handles the game loop, and manages player interactions.

## Technologies Used
- C++
- Standard Template Library (STL)

## How to Compile and Run
1. Clone the repository to your local machine.
2. Navigate to the directory containing the code.
3. Compile the code using a C++ compiler, e.g., `g++ -o tictactoe main.cpp`.
4. Run the executable in the console, e.g., `./tictactoe`.

## Contributions
Contributions are welcome. If you have suggestions for improvement or have found a bug, please open an issue or submit a pull request.

## License
This project is licensed under the MIT License - see the LICENSE.md file for details.

## Acknowledgments
- CodSoft for the opportunity to work on this project during my internship.
- The C++ community for continuous support and inspiration.

Enjoy playing Tic-Tac-Toe!
