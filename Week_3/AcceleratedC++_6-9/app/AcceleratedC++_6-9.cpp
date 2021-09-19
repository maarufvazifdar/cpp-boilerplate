/**
 * @file AcceleratedC++_6-9.cpp
 * @brief Week3 Assignment Problem.
 *
 * @copyright
 *
 * @author Maaruf Vazifdar
 *
 * @date 09-17-2021
 */
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

/** @brief   Function that takes a vector of strings and concatenates
 *           it to a new string.
 *  @param   word is a string which is concatenated to string MySentence.
 *  @return void
 */
void MakeSentence(std::string word) {
  std::string MySentence = "";
  MySentence += word;
  std::cout << MySentence;
}

int main() {
  std::vector<std::string> MyVector { "Hey, ", "concatenate ", "this ",
      "to ", "a ", "string." };
  for_each(MyVector.begin(), MyVector.end(), MakeSentence);
  return 0;
}
