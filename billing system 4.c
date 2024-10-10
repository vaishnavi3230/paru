#include <iostream>
using namespace std;

int displayVegMenu();
int displayNonVegMenu();
void displayInstructions();

int returnTotalBill()
{
    char itemType;
    int billAmount = 0;
    char selectAgain;

    do
    {
        displayInstructions();
        cout << "Please select your choice (a for Veg, b for Non-Veg): ";
        cin >> itemType;

        if (itemType == 'a' || itemType == 'A')
        {
            billAmount += displayVegMenu();
        }
        else if (itemType == 'b' || itemType == 'B')
        {
            billAmount += displayNonVegMenu();
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        cout << "Do you want to add more items? (y/n): ";
        cin >> selectAgain;

    } while (selectAgain == 'y' || selectAgain == 'Y');

    return billAmount;
}

int displayVegMenu()
{
    int choice;
    cout << "\nVeg Menu:" << endl;
    cout << "1) Paneer      : Rs 250" << endl;
    cout << "2) Burger      : Rs 50" << endl;
    cout << "3) Pizza       : Rs 100" << endl;
    cout << "4) Chowmein    : Rs 150" << endl;
    cout << "5) Veg Roll    : Rs 100" << endl;
    cout << "Please enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1: return 250;
    case 2: return 50;
    case 3: return 100;
    case 4: return 150;
    case 5: return 100;
    default:
        cout << "Invalid choice, please try again." << endl;
        return displayVegMenu();
    }
}

int displayNonVegMenu()
{
    int choice;
    cout << "\nNon-Veg Menu:" << endl;
    cout << "1) Chicken      : Rs 350" << endl;
    cout << "2) Chicken Burger : Rs 100" << endl;
    cout << "3) Pizza        : Rs 150" << endl;
    cout << "4) Fish         : Rs 200" << endl;
    cout << "5) Non Veg Roll : Rs 200" << endl;
    cout << "Please enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1: return 350;
    case 2: return 100;
    case 3: return 150;
    case 4: return 200;
    case 5: return 200;
    default:
        cout << "Invalid choice, please try again." << endl;
        return displayNonVegMenu();
    }
}

void displayInstructions()
{
    cout << "\n --------------- FOODI PARU --------------- " << endl;
    cout << " --------------- WELCOME TO FOODI PARU --------------- " << endl;
    cout << "--------------- ONLINE FOOD ORDER ---------------" << endl;
    cout << "--------------- Please follow below instructions ---------------" << endl;
    cout << "Step 1: You can order both veg and non-veg items" << endl;
    cout << "Step 2: Choose your option carefully (a for Veg, b for Non-Veg)" << endl;
    cout << "Step 3: You will receive your final bill after the order" << endl;
}

int main()
{
    int totalBill = returnTotalBill();
    cout << "Your total bill amount is: Rs " << totalBill << endl;
    cout << "Thank you for your order!" << endl;
    return 0;
}
