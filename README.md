Cyber Terminal Game

Project Idea  
This is a simple console-based game written in C++.the idea of the project is to simulate a hacking terminal where the user enters commands and the system responds accordingly. The player tries to successfully hack the system while avoiding detection by the security system.

---
Programming Language : C++
---

What the Project Uses  
- iostream library for input and output (cin, cout)  
- string library to handle text commands  
- variables to store game data like alert level, attempts, and system status  
- loops (while loop) to keep the game running continuously  
- conditions (if / else if) to check user commands and control the game flow  
- arrays to store and validate allowed commands  

---

How the Game Works  
The program runs in a loop and waits for the user to enter a command.  
Each command has a specific function in the game.

If the user enters a correct command, the program responds normally.  
If the user enters an incorrect command, the alert level increases and the number of attempts decreases.

The game ends when:
- The alert level reaches 100 (player loses)  
- The system is successfully hacked (player wins)  
- The user runs out of attempts  
---

Purpose of the Project  
The purpose of this project is to practice basic C++ programming concepts such as loops, conditions, variables, arrays, and user input handling while building a simple interactive terminal game.
