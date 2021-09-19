/**
 * @file AcceleratedC++_4-5.cpp
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
#include <algorithm>

/** @brief  Function that splits sentence based on ' ', ',', '.', ';'
 *          and '?' and pushes words in a vector.
 *  @param  s is a string taken from the user.
 *  @return TempWord is a vector of strings, which contains words
 *          from the input string.
 */
std::vector<std::string> StringToVector(std::string s) {
  std::string TempWord = "";
  std::vector<std::string> TempVector;
  for (unsigned int  i = 0; i < s.length(); i++) {
    if (s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == ';'
        || s[i] == '?') {
      if (TempWord.empty() != true) {
        TempVector.push_back(TempWord);
        TempWord.clear();
      }
    } else {
      TempWord += s[i];
    }
  }
  if (TempWord != "")
    TempVector.push_back(TempWord);
  return TempVector;
}

int main() {
  std::string MySentence;
  int WordCount;
  std::vector<std::string> WordsVector;
  std::vector<std::string> UniqueWords;
  std::vector<int> UniqueWordsCount;
  std::vector<std::string> TempVector;

  std::cout << "Enter a sentence." << std::endl;
  std::getline(std::cin, MySentence);
  WordsVector = StringToVector(MySentence);

//  //   Display words vector
//  for (std::int16_t j = 0; j < WordsVector.size(); j++) {
//    std::cout << WordsVector[j] << std::endl;
//  }

  std::cout << "Number of Words in sentence: " << WordsVector.size()
            << std::endl;

  // Count number of times each word occurs.
  UniqueWords = WordsVector;
  sort(UniqueWords.begin(), UniqueWords.end());

  UniqueWords.erase(unique(UniqueWords.begin(), UniqueWords.end()),
                    UniqueWords.end());

  for (unsigned int a = 0; a < UniqueWords.size(); a++) {
    WordCount = count(WordsVector.begin(), WordsVector.end(), UniqueWords[a]);
    UniqueWordsCount.push_back(WordCount);
    std::cout << UniqueWords[a] << " occurred " << UniqueWordsCount[a]
              << " times" << std::endl;
  }
  return 0;
}
