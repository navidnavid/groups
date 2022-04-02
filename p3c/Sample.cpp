#include "Sample.h"

template <class T>
Sample<T>::Sample(const T value, const int index) : Value(value), Index(index) {}

template <class T>
T Sample<T>::getValue()
{
    return value;
}

template <class T>
int Sample<T>::getIndex()
{
    return Index;
}
