/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:35:04 by zwong             #+#    #+#             */
/*   Updated: 2023/07/27 20:35:06 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <stdexcept>

#define RESET "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

template<typename T>
class Array {
    public:
        // Constructors
        Array() : _array(new T[0]), _size(0) {};
        Array(const unsigned int size) : _array(new T[size]), _size(size) {};
        Array(const Array &copy) {
            if (copy.size() > 0) {
                _size = copy.size();
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++) {
                    _array[i] = copy.get_array()[i];
                }
            } else {
                _size = 0;
                _array = NULL;
            }
        }

        // Destructor
        ~Array() { if(_size != 0) delete[] _array; };

        // Operators
        Array &operator=(Array other) { this->swap(*this, other); return (*this); };
        void swap(Array &lhs, Array &rhs) {
            std::swap(lhs._size, rhs._size);
            std::swap(lhs._array, rhs._array);
        }
        
        // This subscript operator gets an index and returns the value of custom type <T>
        T &operator[](int i) {
            if (i < 0 || i >= (int)_size)
                throw std::out_of_range("Index is out or range!");
            return (_array[i]);
        }

        // Getters
        unsigned int size(void) const { return (this->_size); };
        T *get_array(void) const { return (this->_array); }; // my own extra

    private:
        T *_array;
        unsigned int _size;
};

#endif
