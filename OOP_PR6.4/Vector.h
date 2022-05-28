#pragma once
#include <string>
#include <iostream>
#include <math.h>

template <class T>
class vector
{
    T *v;
    int size;
public:
    vector(int newsize);
    vector(vector&);
    void set_elem(int i, T x);
    T get_elem(int i);

    friend vector<T> operator + (const vector<T>& x, const vector<T>& y)
    {
        vector<T> z(x.size);
        for (int i = 0; i < x.size; i++)
            z.v[i] = x.v[i] + y.v[i];
        return z;
    }
    
    friend vector<T> operator * (const vector<T>& x, const vector<T>& y)
    {
        vector<T> z(x.size);
        for (int i = 0; i < x.size; i++)
            z.v[i] = x.v[i] * y.v[i];
        return z;
    }
    
    friend std::istream& operator >> (std::istream& is, vector<T>& x)
    {
        std::cout << "Input " << x.size << " elements of vector" << std::endl;
        for (int i = 0; i < x.size; i++)
        {
            std::cout << "element[" << i << "] = ? ";
            is >> x.v[i];
        }
        return is;
    }
    
    friend std::ostream& operator << (std::ostream& os, vector<T>& x)
    {
        for (int i = 0; i < x.size; i++)
            os << x.v[i] << ' '; os << std::endl;
        return os;
    }
    
};

template <class T>
void vector<T>::set_elem(int i, T x)
{
    v[i] = x;
}

template <class T>
T vector<T>::get_elem(int i)
{
    return v[i];
}

template <class T>
vector<T>::vector(int newsize)
{
    v = new T[size = newsize];
    for (int i = 0; i < size; i++)
        v[i] = T();
}

template <class T>
vector<T>::vector(vector& x)
{
    v = new T[size = x.size];
    for (int i = 0; i < size; i++)
        v[i] = x.v[i];
}
