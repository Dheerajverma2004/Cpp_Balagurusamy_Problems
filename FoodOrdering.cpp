#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int choice, quantity, total_cost = 0;
    
    // Define menu
    cout << "Menu:" << endl;
    cout << "1. Hamburger - $5" << endl;
    cout << "2. Pizza - $8" << endl;
    cout << "3. Sandwich - $4" << endl;
    
    // Prompt user for order
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    
    // Prompt user for quantity
    cout << "Enter the quantity: ";
    cin >> quantity;
    
    // Calculate total cost
    switch (choice) {
        case 1:
            total_cost = quantity * 5;
            break;
        case 2:
            total_cost = quantity * 8;
            break;
        case 3:
            total_cost = quantity * 4;
            break;
        default:
            cout << "Invalid choice." << endl;
            return 0;
    }
    
    // Print order summary
    cout << "Your order summary: " << endl;
    cout << "-------------------" << endl;
    switch (choice) {
        case 1:
            cout << "Hamburger x " << quantity << " = $" << total_cost << endl;
            break;
        case 2:
            cout << "Pizza x " << quantity << " = $" << total_cost << endl;
            break;
        case 3:
            cout << "Sandwich x " << quantity << " = $" << total_cost << endl;
            break;
    }
    cout << "-------------------" << endl;
    cout << "Total cost = $" << total_cost << endl;
    
    return 0;
}
