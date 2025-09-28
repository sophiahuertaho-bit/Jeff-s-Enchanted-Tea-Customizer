
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cout << "🍵 Welcome Jeff to your Enchanted Tea Customizer! 🍵\n\n";

    // Step 1: Choose a mug
    vector<string> mugs = {"Green Mug", "Blue Mug", "Pink Mug", "Grey Mug"};
    cout << "Choose your mug:\n";
    for (int i = 0; i < mugs.size(); i++) {
        cout << i + 1 << ". " << mugs[i] << endl;
    }
    int mugChoice;
    cin >> mugChoice;

    // Step 2: Choose tea type
    vector<string> teas = {"Matcha Green Tea", "Chamomile Tea", "Peppermint Tea", "Oolong Tea"};
    cout << "\nChoose your tea type:\n";
    for (int i = 0; i < teas.size(); i++) {
        cout << i + 1 << ". " << teas[i] << endl;
    }
    int teaChoice;
    cin >> teaChoice;

    // Step 3: Choose brew strength
    vector<string> brewStrengths = {"Light Brew / Low Strength", "Medium Brew / Medium Strength", "High Brew / Heavy Strength"};
    cout << "\nChoose your brew strength:\n";
    for (int i = 0; i < brewStrengths.size(); i++) {
        cout << i + 1 << ". " << brewStrengths[i] << endl;
    }
    int brewChoice;
    cin >> brewChoice;

    // Step 4: Choose toppings
    vector<string> toppings = {"sweaty after a run underwear", "period underwear", "haven't showered in 4 days underwear"};
    vector<string> chosenToppings;
    char addMore;
    do {
        cout << "\nChoose a topping:\n";
        for (int i = 0; i < toppings.size(); i++) {
            cout << i + 1 << ". " << toppings[i] << endl;
        }
        int topChoice;
        cin >> topChoice;
        chosenToppings.push_back(toppings[topChoice - 1]);

        cout << "Add another topping? (y/n): ";
        cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    // Display final tea
    cout << "\n✨ Your customized tea is ready! ✨\n";
    cout << "Mug: " << mugs[mugChoice - 1] << "\n";
    cout << "Tea: " << teas[teaChoice - 1] << "\n";
    cout << "Brew Strength: " << brewStrengths[brewChoice - 1] << "\n";
    cout << "Toppings: ";
    for (int i = 0; i < chosenToppings.size(); i++) {
        cout << chosenToppings[i];
        if (i != chosenToppings.size() - 1) cout << ", ";
    }
    cout << "\n\nEnjoy your enchanted tea, Jeff! ☕\n";
    cout << "And as a bonus, it comes with complimentary corn muffins 🧁✨\n";

    return 0;
} 
