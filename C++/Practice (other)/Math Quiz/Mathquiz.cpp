#include <iostream>

int main() {
    
    // Get a different random number each time the program runs
    srand(time(0));

    // Defines the 2 numbers
    int number1 = rand() % 101;
    int number2 = rand() % 101;
    
    int answer;
    
    std::cout << "\nWhat is " << number1 << " + " << number2 << "?\n";
    std::cin >> answer;

    if (answer == (number1 + number2)) {
        std::cout << "\nYou got it right!\n";
        main();

        return 0;
    }

    else {
        std::cout << "\nWrong! The answer was " << (number1 + number2) << ". \n";
        main();

        return 0;
    }

    return 0;
}