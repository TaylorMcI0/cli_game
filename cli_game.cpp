#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class npc {
    public:
        int lvl, exp, str, end, per, inte, lu, hp;
        npc(int strength, int endurance, int perception, int intelligence, int luck) {
            lvl = 1;
            exp = 0;
            str = strength;
            end = endurance;
            per = perception;
            inte = intelligence;
            lu = luck;
            hp = (str + end) / 2;
        }
};

int rollDice(int sides) {
    // Dice Roll Simulation
    int roll , count = 0;
    srand(time(NULL));
    for (int i = 1; i <= 1; i++){
        roll = rand() % sides + 1; // Get a number 1 to Value attributed to sides variable
        if (roll == sides) count++;
    };
    return roll;
}

string checkDice(int sides, int check, int modifier) {
    // Checks the roll for Pass/Fail
    int roll = rollDice(sides);
    string result;
    int r = roll + modifier;
    result = (r > check) ? "pass" : "fail";
    switch(roll == sides) {
        case true: result = "critPass";
        break;
    };
    switch(roll == 1) {
        case true: result = "critFail";
        break;
    };
    return result;
}

int gameLoop(int str, int end, int per, int inte, int lu) {
    npc player(str, end, per, inte, lu);
    while (player.hp > 0) {

    };
    return 0;
}

int main() {
    string input;
    cout << "Welcome\n" << "1. Start\n";
    cin >> input;
    if (input == "Start" || "start") {
        // Creating Player Stats
        int str, end, per, inte, lu;
        string input;

        cout << "Type.\n";
        cin >> input;

        cout << "Awaken.\n";
        cin >> input;
        str = (input == "its") ? rollDice(20) : rollDice(10);

        cout << "Breathe.\n";
        cin >> input;
        end = (input == "dangerous") ? rollDice(20) : rollDice(10);

        cout << "Remember Self.\n";
        cin >> input;
        per = (input == "to") ? rollDice(20) : rollDice(10);

        cout << "Gather Surroundings.\n";
        cin >> input;
        inte = (input == "go") ? rollDice(20) : rollDice(10);

        cout << "Open Eyes.\n";
        cin >> input;
        lu = (input == "alone") ? rollDice(20) : rollDice(10);

        gameLoop(str, end, per, inte, lu);
        } else {
            cout << "Try Again? (y/n)\n";
            cin >> input;
            if(input == "y") {
                main();
            } else if(input == "n") {
                return 0;
            }
        };
}
