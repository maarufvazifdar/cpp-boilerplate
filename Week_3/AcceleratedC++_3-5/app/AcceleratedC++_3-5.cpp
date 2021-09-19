/**
 * @file AcceleratedC++_3-5.cpp
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

/** @brief  Function to input student name, their marks in a subject
 *          and assign grade accordingly.
 *  @param  none
 *  @return void
 */
void StudentInfo() {
  std::vector<std::string> StudentName;
  std::vector<char> StudentGrade;
  int StudentMarks;
  std::string SName;
  char Ans;
  do {
    std::cout << "Enter student name: " << std::endl;
    std::cin >> SName;
    StudentName.push_back(SName);
    std::cout << "Enter student marks: " << std::endl;
    std::cin >> StudentMarks;
    switch (StudentMarks) {
      case 91 ... 100:
        StudentGrade.push_back('A');
        break;
      case 81 ... 90:
        StudentGrade.push_back('B');
        break;
      case 51 ... 80:
        StudentGrade.push_back('C');
        break;
      case 0 ... 50:
        StudentGrade.push_back('F');
        break;
      default:
        break;
    }
    std::cout << "Do you want to enter more student info? (y or n): "
              << std::endl;
    std::cin >> Ans;
  } while (Ans == 'y');

  for (unsigned int i = 0; i < (StudentName.size()); i++) {
    std::cout << "\n" << StudentName[i] << " : " << StudentGrade[i];
  }
}

int main() {
  StudentInfo();
  return 0;
}
