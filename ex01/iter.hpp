#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<class Arr, class Size, class Fnc>
void iter(Arr *arr, Size size, Fnc* fnc)
{
  for (int i = 0; i < size; i++)
    fnc(arr[i]);
}

template<class T>
void printOne(T& one)
{
  std::cout << one << '\n';
}

#endif // ITER_HPP
