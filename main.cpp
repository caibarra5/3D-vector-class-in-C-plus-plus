#include <iostream>
#include "vector.h"


int main(int argc, char** argv){


  vector a(1,2,3);

  vector b(4,5,6);

  double s = 100;

  std::cout << "a  = \n" << a  << std::endl;
  std::cout << "b = \n" << b  << std::endl;
  std::cout << "a + b = \n" << (a+b)  << std::endl;
  std::cout << "a - b = \n" << (a-b)  << std::endl;
  std::cout << "a * b = \n" << (a*b)  << std::endl;
  std::cout << "b * a = \n" << (b*a)  << std::endl;
  std::cout << "a ^ b = \n" << (a^b)  << std::endl;
  std::cout << "a.magnitude()  = \n" << a.magnitude()  << std::endl;
  a.setComponents(11,22,33);
  std::cout << "a.setComponents(11,22,33) = \n" << a  << std::endl;


  std::cout << "s*a = \n" << s*a << std::endl;
  std::cout << "a*s = \n" << a*s << std::endl;









  return 0;

}
