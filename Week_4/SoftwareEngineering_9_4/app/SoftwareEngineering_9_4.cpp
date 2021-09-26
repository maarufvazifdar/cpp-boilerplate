/**
 * @file SoftwareEngineering_9_4.cpp
 * @brief A C++ program to prints out the index of the first
 *        occurrence of  a  substring from a main string.
 *
 * @copyright
 *
 * @author Maaruf Vazifdar
 *
 * @date 09-24-2021
 */
#include<iostream>
#include<string>
#include<algorithm>

/** @brief  Member function that returns the index of the first
 *  occurrence of  a  substring from a main string.
 *  @param  string InputString, string StringToSearch
 *  @return int index
 */
int StringPosition(std::string InputString, std::string StringToSearch) {
  int index = InputString.find(StringToSearch);
  return index;
}

/** @brief  Member function prints out the index of the first
 * occurrence of  a  substring from a main string.
 *  @param  none
 *  @return void
 */
void printPosition() {
  std::string InputString = "My name is Maaruf Vazifdar.";
  std::string StringToSearch = "Maaruf";
  std::cout << StringPosition(InputString, StringToSearch) << std::endl;
}

int main() {
  printPosition();
}
