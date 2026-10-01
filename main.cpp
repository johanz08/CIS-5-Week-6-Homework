#include <iostream>
#include <string>

// Homework 6 — Johan Zuniga
// CIS 5 Week 06 · Menu

int main() {
  int choice = 0;
  int number = 0;
  std::string name;

  do {
    std::cout << "\n1. Say hello\n";
    std::cout << "2. Count down\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";

    if (!(std::cin >> choice)) {
      return 0;
    }

    if (choice == 1) {
      std::cout << "Enter your name: ";
      std::getline(std::cin >> std::ws, name);
      std::cout << "Hello " << name << "\n";
    }
    else if (choice == 2) {
      std::cout << "Enter a nonnegative number: ";

      if (!(std::cin >> number)) {
        return 0;
      }

      if (number < 0) {
        std::cout << "Please enter zero or a positive number.\n";
      }
      else {
        std::cout << "Countdown:\n";

        while (number >= 0) {
          std::cout << number << "\n";
          number = number - 1;
        }
      }
    }
    else if (choice == 3) {
      std::cout << "Exiting...\n";
    }
    else {
      std::cout << "Invalid choice. Please enter 1, 2, or 3.\n";
    }

  } while (choice != 3);

  std::cout << "The Menu is closed\n";

  return 0;
}
