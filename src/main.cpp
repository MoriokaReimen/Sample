#include <iostream>
#include <string>
#include "Member/Member.hpp"

int main()
{
  std::string pause;
  Higa higa;
  Nakata nakata;
  Sawada sawada;
  Alex alex;

  std::cout << "Higa says: ";
  higa.eat();
  std::cout << "Nakata says: ";
  nakata.eat();
  std::cout << "Sawada says: ";
  sawada.eat();
  std::cout << "Alex says: ";
  alex.eat();

  std::getline(std::cin, pause);
  return EXIT_SUCCESS;
}
