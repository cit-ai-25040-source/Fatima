#include <iostream>
#include <string>

using namespace std;

bool isValidCommand(string cmd, string commands[], int size) {
    for (int i = 0; i < size; i++) {
        if (cmd == commands[i]) {
            return true;
        }
    }
    return false;
}

void showHelp() {
    cout << "\n=== AVAILABLE COMMANDS ===\n";
    cout << "help   - Show commands\n";
    cout << "scan   - Scan system\n";
    cout << "hack   - Attempt hack\n";
    cout << "status - Show alert level\n";
    cout << "exit   - Quit program\n";
}

int main() {
    string command;
    int alert = 0;
    bool systemBreached = false;
    int attempts = 5;

    string commands[] = {"help", "scan", "hack", "status", "exit"};
    int size = 5;

    cout << "=== CYBER TERMINAL v2 ===\n";
    cout << "Type 'help' to start.\n";

    while (alert < 100 && !systemBreached && attempts > 0) {

        cout << "\n[Hacker_Root]: ";
        cin >> command;

        // check valid command
        if (!isValidCommand(command, commands, size)) {
            cout << "Unknown command! System tracing you...\n";
            alert += 10;
            attempts--;
            continue;
        }

        if (command == "help") {
            showHelp();
        }

        else if (command == "scan") {
            cout << "Scanning system...\n";
            cout << "Vulnerability detected in port " << (1000 + rand() % 9000) << "!\n";
        }

        else if (command == "hack") {
            int answer;
            cout << "Solve: (12 * 3) + 6 = ";
            cin >> answer;

            int correct = (12 * 3) + 6;

            if (answer == correct) {
                cout << "ACCESS GRANTED! SYSTEM BREACHED.\n";
                systemBreached = true;
            } else {
                cout << "WRONG! Firewall strengthened.\n";
                alert += 30;
                attempts--;
            }
        }

        else if (command == "status") {
            cout << "Alert Level: " << alert << "%\n";
            cout << "Attempts left: " << attempts << "\n";
        }

        else if (command == "exit") {
            cout << "Exiting system...\n";
            break;
        }
    }

    cout << "\n=== GAME OVER ===\n";

    if (alert >= 100)
        cout << "!!! BUSTED !!! Security caught you.\n";

    if (systemBreached)
        cout << "*** MISSION COMPLETE *** You hacked the system!\n";

    if (attempts <= 0)
        cout << "No attempts left. Access locked.\n";

    return 0;
}
