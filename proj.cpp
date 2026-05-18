#include <iostream>
#include <string>

using namespace std;
int main() {
    string command;
    int alert = 0;
    bool systemBreached = false;
    int attempts = 3;
    cout << "=== CYBER TERMINAL ===" << endl;
    cout << "Type 'help' to see available commands." << endl;

   while (alert < 100 && !systemBreached && attempts > 0){
        cout << "\n[Hacker_Root]: ";
        cin >> command;

        if (command == "help") {
            cout << "- scan: Check for vulnerabilities\n- hack: Start bypass protocol\n- status: Check alert level" << endl;
        }
        else if (command == "scan") {
            cout << "Scanning... Vulnerability found in port 8080!" << endl;
        }
        else if (command == "hack") {
            int answer;
            cout << "CRITICAL: Solve to bypass firewall! (25 * 4 / 2) = ";
            cin >> answer;
            if (answer == 50) {
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
            cout << "Unknown command. System is tracing your IP..." << endl;
            alert += 10;
        }
    }

    if (alert >= 100) cout << "\n!!! BUSTED !!! Security forces are at your door." << endl;
    if (systemBreached) cout << "\n*** MISSION COMPLETE *** You stole the data." << endl;

    return 0;
}
