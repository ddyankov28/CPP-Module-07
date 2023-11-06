/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:21:51 by ddyankov          #+#    #+#             */
/*   Updated: 2023/11/06 17:15:21 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <ctime>
# include <stdexcept>
# include <cstdlib>

# define URED "\033[4;31m"
# define RED "\033[1;91m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"
# define CYAN "\033[1;96m"
# define RESET "\033[0m"
# define LINE  std::cout << "-------------------------" << std::endl;

template < typename T >
class Array
{
    private:
        T*              _array;
        unsigned int    _size;
    public:
        //---   default constructor (no parameter)  ---//
        Array() : _size(0)
        {
            _array = NULL;
            std::cout << GREEN << "Default constructror called" << RESET << std::endl;
        }

        //---   default parameter constructor   ---//
        Array(unsigned int n) : _size(n)
        {
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = T();
            std::cout << GREEN << "Default param constructror called" << RESET << std::endl; 
        }
        
        //---   destructor  ---//
        ~Array()
        {
            delete [] _array;
            std::cout << RED << "Destructor called" << RESET << std::endl;
        }
        
        //---   copy constructor    ---//
        Array(const Array& inst) : _array(NULL)
        {
            *this = inst;
            std::cout << YELLOW << "Copy constructror called" << RESET << std::endl; 
        }

        //---   copy assignment operator    ---//
        Array&  operator=(const Array& inst)
        {
            _size = inst._size;
            if (_array)
                delete [] _array;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = inst._array[i];
            std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
            return *this;
        }

        T&  operator[] (int index) const
        {
            if (index < 0 || index >= static_cast<int>(size()))
                throw std::out_of_range("Index is out of range");
            return _array[index];  
        }
        
        //---   getter for the size ---//
        unsigned int size() const
        {
            return _size;
        }
};


# endif
