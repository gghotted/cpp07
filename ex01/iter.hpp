#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<class Arr, class Fnc>
void iter(Arr *arr, size_t size, Fnc* fnc)
{
  for (size_t i = 0; i < size; i++)
    fnc(arr[i]);
}

template<class T>
void printOne(T& one)
{
  std::cout << one << '\n';
}

#endif // ITER_HPP
