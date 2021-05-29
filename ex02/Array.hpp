#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <class T>
class Array
{
private:
  T* arr;
  unsigned int _size;
public:
  Array()
  {
    _size = 0;
    arr = new T[0];
  }
  Array(unsigned int n)
  {
    _size = n;
    arr = new T[n];
    for (unsigned int i = 0; i < _size; i++)
      arr[i] = T();
  }
  Array(const Array& array)
  {
    *this = array;
  }
  Array& operator= (const Array& array)
  {
    delete[] arr;
    arr = new T[array._size];
    for (unsigned int i = 0; i < array._size; i++)
    {
      arr[i] = array.arr[i];
    }
    _size = array._size;
    return (*this);
  }
  ~Array()
  {
    delete[] arr;
  }
  T& operator[](unsigned int n)
  {
    if (n >= _size)
      throw std::out_of_range("out of range\n");
    return arr[n];
  }
  const T& operator[](unsigned int n) const
  {
    if (n >= _size)
      throw std::out_of_range("out of range\n");
    return arr[n];
  }
  unsigned int size(void) const { return _size; }
};


#endif
