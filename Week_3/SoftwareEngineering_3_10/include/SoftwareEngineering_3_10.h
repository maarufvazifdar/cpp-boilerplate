/**
 * @file SoftwareEngineering_3_10.h
 * @brief A header file for Week3 Assignment Problem.
 *
 * @copyright
 *
 * @author Maaruf Vazifdar
 *
 * @date 09-17-2021
 */

#ifndef SOFTWAREENGINEERING_3_10_H
#define SOFTWAREENGINEERING_3_10_H
#include <iostream>

/** @brief   A class for course grading for students. It has members to update
 *           the student grade and compute grade point  average of the class.
 */
class RoboticsClass {
 private:
  int Student[5] = { 1, 2, 3, 4, 5 };
  char StudentGrade[5] = { 'A', 'B', 'C', 'D', 'E' };
  int StudentNo;
  float ClassGradePointAvg;
  char Ans, NewGrade;
  float GradeSum = 0;

 public:
  /** @brief  Member function that takes student id, displays student's
   *          grade and provides option to update the grade.
   *  @param  none
   *  @return void
   */
  void UpdateStudentGrade() {
    std::cout << "Enter Student No.: ";
    std::cin >> StudentNo;
    std::cout << "Student " << StudentNo << "'s current grade is: "
              << StudentGrade[StudentNo - 1] << "." << std::endl;
    std::cout << "Do you want to update Grade? (y or n).";
    std::cin >> Ans;
    if (Ans == 'y' || Ans == 'Y') {
      std::cout << "Enter new Grade: ";
      std::cin >> NewGrade;
      StudentGrade[StudentNo - 1] = NewGrade;
      std::cout << "Student " << StudentNo << "'s Grade updated to: "
                << StudentGrade[StudentNo - 1] << std::endl;
    }
  }

  /** @brief Member function that computes the grade point average of the class.
   *        Grade Scale:  A - 5
   *                      B - 4
   *                      C - 3
   *                      D - 2
   *                      E - 1
   *                      F - 0
   *  @param  none
   *  @return void
   */
  void CalcGradePointAvg() {
    std::cout << "Grade Scale:" << std::endl;
    std::cout << "A = 5 \nB = 4 \nC = 3 \nD = 2 \nE = 1 \nF = 0" << std::endl;
    for (int i = 0; i <= (sizeof(StudentGrade) - sizeof(StudentGrade[0]));
        i++) {
      switch (StudentGrade[i]) {
        case 'A':
          GradeSum += 5;
          break;
        case 'B':
          GradeSum += 4;
          break;
        case 'C':
          GradeSum += 3;
          break;
        case 'D':
          GradeSum += 2;
          break;
        case 'E':
          GradeSum += 1;
          break;
        case 'F':
          GradeSum += 0;
          break;
        default:
          break;
      }
    }
    ClassGradePointAvg = GradeSum
        / ((sizeof(StudentGrade) - sizeof(StudentGrade[0])) + 1);
    std::cout << "Class Grade Point Average is : " << ClassGradePointAvg
              << std::endl;
  }
};
#endif
