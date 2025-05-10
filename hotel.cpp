#include <iostream>
using namespace std;

int main() {
    int quant, choice;

    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;

    // Food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;

    // Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    // Input available quantities
    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of burger: ";
    cin >> Qburger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake: ";
    cin >> Qshake;
    cout << "\n Quantity of chicken-roll: ";
    cin >> Qchicken;

menu:
    cout << "\n\t\t\t Please select from the menu options";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken-roll";
    cout << "\n7) Information regarding sales and collection";
    cout << "\n8) Exit";

    cout << "\n\n Please enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\n\n Enter the number of rooms you want: ";
            cin >> quant;
            if (Qrooms - Srooms >= quant) {
                Srooms += quant;
                Total_rooms += quant * 1200;
                cout << "\n\n\t\t" << quant << " room(s) have been allotted to you!";
            } else {
                cout << "\n\tOnly " << Qrooms - Srooms << " rooms remaining in hotel";
            }
            break;

        case 2:
            cout << "\n\n Enter Pasta Quantity: ";
            cin >> quant;
            if (Qpasta - Spasta >= quant) {
                Spasta += quant;
                Total_pasta += quant * 250;
                cout << "\n\n\t\t" << quant << " pasta is the order!";
            } else {
                cout << "\n\tOnly " << Qpasta - Spasta << " pasta remaining in hotel";
            }
            break;

        case 3:
            cout << "\n\n Enter Burger Quantity: ";
            cin >> quant;
            if (Qburger - Sburger >= quant) {
                Sburger += quant;
                Total_burger += quant * 120;
                cout << "\n\n\t\t" << quant << " burger is the order!";
            } else {
                cout << "\n\tOnly " << Qburger - Sburger << " burgers remaining in hotel";
            }
            break;

        case 4:
            cout << "\n\n Enter Noodle Quantity: ";
            cin >> quant;
            if (Qnoodles - Snoodles >= quant) {
                Snoodles += quant;
                Total_noodles += quant * 250;
                cout << "\n\n\t\t" << quant << " noodle is the order!";
            } else {
                cout << "\n\tOnly " << Qnoodles - Snoodles << " noodles remaining in hotel";
            }
            break;

        case 5:
            cout << "\n\n Enter Shakes Quantity: ";
            cin >> quant;
            if (Qshake - Sshake >= quant) {
                Sshake += quant;
                Total_shake += quant * 250;
                cout << "\n\n\t\t" << quant << " shakes is the order!";
            } else {
                cout << "\n\tOnly " << Qshake - Sshake << " shakes remaining in hotel";
            }
            break;

        case 6:
            cout << "\n\n Enter Chicken-roll Quantity: ";
            cin >> quant;
            if (Qchicken - Schicken >= quant) {
                Schicken += quant;
                Total_chicken += quant * 150;
                cout << "\n\n\t\t" << quant << " chicken-roll is the order!";
            } else {
                cout << "\n\tOnly " << Qchicken - Schicken << " chicken-rolls remaining in hotel";
            }
            break;

        case 7:
            cout << "\n\t\tDetails of Sales and Collection";

            cout << "\n\n Number of rooms we had: " << Qrooms;
            cout << "\n Number of rooms we gave for rent: " << Srooms;
            cout << "\n Remaining rooms: " << Qrooms - Srooms;
            cout << "\n Total room collection for the day: " << Total_rooms;

            cout << "\n\n Number of Pastas we had: " << Qpasta;
            cout << "\n Number of Pastas we sold: " << Spasta;
            cout << "\n Remaining Pastas: " << Qpasta - Spasta;
            cout << "\n Total Pasta collection for the day: " << Total_pasta;

            cout << "\n\n Number of Burgers we had: " << Qburger;
            cout << "\n Number of Burgers we sold: " << Sburger;
            cout << "\n Remaining Burgers: " << Qburger - Sburger;
            cout << "\n Total Burger collection for the day: " << Total_burger;

            cout << "\n\n Number of Noodles we had: " << Qnoodles;
            cout << "\n Number of Noodles we sold: " << Snoodles;
            cout << "\n Remaining Noodles: " << Qnoodles - Snoodles;
            cout << "\n Total Noodle collection for the day: " << Total_noodles;

            cout << "\n\n Number of Shakes we had: " << Qshake;
            cout << "\n Number of Shakes we sold: " << Sshake;
            cout << "\n Remaining Shakes: " << Qshake - Sshake;
            cout << "\n Total Shake collection for the day: " << Total_shake;

            cout << "\n\n Number of Chicken-rolls we had: " << Qchicken;
            cout << "\n Number of Chicken-rolls we sold: " << Schicken;
            cout << "\n Remaining Chicken-rolls: " << Qchicken - Schicken;
            cout << "\n Total Chicken-roll collection for the day: " << Total_chicken;
            break;

        case 8:
            exit(0);

        default:
            cout << "\n Please select the numbers mentioned above!";
    }

    goto menu;
    return 0;
}
