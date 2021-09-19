/**
 * @file AcceleratedC++_4-7.cpp
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

/** @brief   Function that returns average of numbers in a  vector.
 *  @param  myVetor is a vector of doubles.
 *  @return Average of all elements of the vector.
 */
double AvgCalc(std::vector<double> myVector) {
  double sum = 0;
  double avg;

  for (int i = 0; i < (myVector.size()); i++) {
    sum += myVector[i];
  }
  avg = sum / (myVector.size());
  return avg;
}

int main() {
  std::vector<double> myVector { 1, 2, 3, 4, 5 };
  std::cout << "Average: " << AvgCalc(myVector) << std::endl;
}
