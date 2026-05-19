
  CYBER TERMINAL GAME

Description
This is a simple C++ console-based hacking simulation game.
The player interacts with a fake terminal system by entering commands to scan, hack, and check system status. The goal is to breach the system before the alert level reaches 100%.

How the Game Works

You start inside a fake cyber terminal:

=== CYBER TERMINAL ===
Type 'help' to see available commands.

You can enter different commands:

help → Shows available commands
scan → Finds a fake vulnerability
hack → Solves a math challenge to breach the system
status → Shows current alert level

Game Rules

Wrong commands increase the alert level by 10%
Wrong hack answers increase alert by 40%
If alert reaches 100% → you lose
If you solve the hack correctly → you win

Features

Uses arrays to store valid commands
Uses functions to organize logic
Command validation using loop search
Simple interactive terminal style gameplay
Alert system increases difficulty over time

Code Concepts Used

Array (Commands List)

string commands[] = {"help", "scan", "hack", "status"};

Functions

showHelp() → displays available commands
isValidCommand() → checks if input exists in array

How to Compile and Run

1. Compile

g++ main.cpp -o game

2. Run

./game

Objective

Try to breach the system before your alert level hits 100%.
Choose commands wisely and think fast.

Future Improvements

Add multiple levels
Add random security codes
Add time limit for hacking
Add more commands like bruteforce, trace, disconnect
Add sound effects or ASCII animations

Author
C++ beginner project focused on:
Arrays
Functions
Loops
Basic game logic
