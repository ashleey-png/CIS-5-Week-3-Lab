#include <iostream>
#include <string>

// Lab 3 — Ashley Duran
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO: declare and initialize on the same line
std::string name = "Ashley";
int age = 24;
double height_m = 1.57;
 char initial = 'A';
 bool student = true;

  std::cout << "=== About me ===\n";
  // TODO: labeled prints from the variable names + CURRENT_YEAR
std::cout << "Name: " << name << '\n';
std::cout << "Age: " << age << '\n';
std::cout << "Height: " << height_m << '\n';
std::cout << "Initial: " << initial << '\n';
std::cout << "Student: " << student << '\n';
std::cout << "Current year: " << CURRENT_YEAR << '\n';
  return 0;
}
