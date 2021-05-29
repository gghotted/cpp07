#include <string>
#include "iter.hpp"

static void add1(int& n)
{
  n++;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  iter(arr, 5, add1);
  iter(arr, 5, printOne<int>);

  std::string sarr[] = {"abc", "def", "ghi"};
  iter(sarr, 3, printOne<std::string>);
}
