/**
 * C++ code for creating a Cube of length 2.4 units.
 * - See ../cpp-std/main.cpp for a similar program with print statements.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"

int main() {
  Cube c;

  c.setLength(3.48);
  double volume = c.getVolume();
  double surfaceArea = c.getSurfaceArea();
  double lateralArea = c.getLateralArea();	
  std::cout << "Volume: " << volume << std::endl;
  std::cout << "Surface Area: " << surfaceArea << std::endl;
  std::cout << "Lateral Area: " << lateralArea;
  return 0;
}
