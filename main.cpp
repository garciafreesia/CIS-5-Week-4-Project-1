#include <iostream>
#include <string>

// Project 1 — Freesia Garcia
// CIS 5 Week 04 · Student card

int main() {
  const int CURRENT_YEAR = 2026;
  const int REQUIRED_CREDITS = 60;
  std::string first = "";
  std::string last = "";
  int age = 0;
  int credits = 0;
  double gpa = 0.0;

  std::cout << "First name? ";
  std::cin >> first;

  std::cout << "Last name? ";
  std::cin >> last;

  std::cout << "Age? ";
  std::cin >> age;

  std::cout << "Credits for the fall semester? ";
  std::cin >> credits;

  std::cout << "GPA? ";
  std::cin >> gpa;

  int grad_year = CURRENT_YEAR + 3;
  int rem_credits = REQUIRED_CREDITS - credits;

  std::cout << "\n=== Student Card===\n";
  std::cout << "Name: " << first << " " << last << '\n';
  std::cout << "Age: " << age << '\n';
  std::cout << "Credits: " << credits << '\n';
  std::cout << "Credits Remaining: " << rem_credits << '\n';
  std::cout << "GPA: " << gpa << '\n';
  std::cout << "Expected Graduation Year: " << grad_year << '\n';

  return 0;
}

