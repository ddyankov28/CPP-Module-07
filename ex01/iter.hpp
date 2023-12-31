/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:27:33 by ddyankov          #+#    #+#             */
/*   Updated: 2023/11/06 17:09:07 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <typeinfo>

# define URED "\033[4;31m"
# define RED "\033[1;91m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"
# define CYAN "\033[1;96m"
# define RESET "\033[0m"
# define LINE  std::cout << "-------------------------" << std::endl;

template < typename T >
void    printElement(const T& arrayElement)
{
    std::cout << " with a value: " << arrayElement << std::endl;
}

template < typename T >
void    iter(const T* array, int length, void(*func)(const T&))
{
    std::cout << "Address: " << array << std::endl;
    int i = 0;
    while (i < length)
    {
        std::cout << "Array Element number[" << i + 1 << "] ";
        func(array[i]);
        i++;
    }
} 

template < typename T >
void    iter(T* array, int length, void(*func)(T&))
{
    std::cout << "Address: " << array << std::endl;
    int i = 0;
    while (i < length)
    {
        std::cout << "Array Element number[" << i + 1 << "]";
        func(array[i]);
        i++;
    }
} 
# endif
