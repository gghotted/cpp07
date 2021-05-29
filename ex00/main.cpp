#include <cstring>
#include <iostream>
#include <string>
#include "whatever.hpp"

void testSwap()
{
  int a = 4, b = 2;
  swap(a, b);
  std::cout << "a: " << a << ", b: " << b << '\n';

  std::string s1 = "42", s2 = "seoul";
  swap(s1, s2);
  std::cout << "s1: " << s1 << ", s2: " << s2 << '\n';
}

void testMin()
{
  std::cout << "min: " << min(4, 2) << '\n';

  std::cout << "min: " << std::boolalpha << min(true, false) << '\n';
}

void testMax()
{
  std::cout << "max: " << max(4, 2) << '\n';

  std::cout << "max: " << std::boolalpha << max(true, false) << '\n';
}

void testGivenMain()
{
  int a = 2;
  int b = 3;

  ::swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine2";

  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

int main(int argc, char** argv)
{
  if (argc != 2)
    return 1;
  if (strcmp(argv[1], "given") == 0) testGivenMain();
  if (strcmp(argv[1], "swap") == 0)  testSwap();
  if (strcmp(argv[1], "min") == 0)   testMin();
  if (strcmp(argv[1], "max") == 0)   testMax();
}
