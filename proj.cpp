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
    cout << "- scan: Check for vulnerabilities\n";
    cout << "- hack: Start bypass protocol\n";
    cout << "- status: Check alert level\n";
}

int main() {
    string command;
    int alert = 0;
    bool systemBreached = false;
    int attempts = 3;

    cout << "=== CYBER TERMINAL ===" << endl;
    cout << "Type 'help' to see available commands." << endl;

    string commands[] = {"help", "scan", "hack", "status"};
    int size = 4;

    while (alert < 100 && !systemBreached && attempts > 0) {
        cout << "\n[Hacker_Root]: ";
        cin >> command;

        if (command == "help") {
            showHelp();
        }
        else if (command == "scan") {
            cout << "Scanning... Vulnerability found in port 8080!" << endl;
        }
        else if (command == "hack") {
            int answer;
            cout << "CRITICAL: Solve to bypass firewall! (25 * 4 / 2) = ";
            cin >> answer;

            int correct = 25 * 4 / 2;

            if (answer == correct) {
                cout << "ACCESS GRANTED! System Breached." << endl;
                systemBreached = true;
            } else {
                alert += 40;
                cout << "WRONG! Firewall detected move. Alert Level: " << alert << "%" << endl;
            }
        }
        else if (command == "status") {
            cout << "Current Alert Level: " << alert << "%" << endl;
        }
        else {
            if (!isValidCommand(command, commands, size)) {
                cout << "Unknown command. System is tracing your IP..." << endl;
                alert += 10;
                attempts--;
            }
        }
    }

    if (alert >= 100)
        cout << "\n!!! BUSTED !!! Security forces are at your door." << endl;

    if (systemBreached)
        cout << "\n*** MISSION COMPLETE *** You stole the data." << endl;

    return 0;
}
