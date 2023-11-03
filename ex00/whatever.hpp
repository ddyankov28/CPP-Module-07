/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:53:23 by ddyankov          #+#    #+#             */
/*   Updated: 2023/11/02 11:20:42 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

# define URED "\033[4;31m"
# define RED "\033[1;91m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"
# define CYAN "\033[1;96m"
# define RESET "\033[0m"
# define LINE  std::cout << "-------------------------" << std::endl;

template < typename T >
void    swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}  

template < typename T >
void    swap(const T& a, const T& b)
{
    (void)a; (void)b;
    std::cout << URED << "Error\nSwapping const variables impossible" << RESET <<  std::endl;
}

template < typename T >
T    min(const T& a, const T& b)
{
    if (a < b)
        return a;
    return b;
}

template < typename T >
T    max(const T& a, const T& b)
{
    if (a > b)
        return a;
    return b;
}

/*  The TYPE type may be large in size, and would demand more space on stack (call-stack). 
  It can include for example double which requires 8 bytes*, some structure or a class, 
  which would demand more bytes to be kept on stack. It essentially means - a new object
  of given type would be created, copy constructor called, and be put into call stack, 
  followed by destructor call at then end of function.
  The Addition of reference (&) avoids all this - reference of same object is passed.
  Function would not change the argument passed, and therefore addition of const to it.
  It ensures, to the caller of function, that the function ( max or min ),
  is not going to change the parameter's value. It also ensures a compiler error if, 
  by mistake, the function itself tries to modify content of (constant) argument.
  This is why I created the swap function with (const) arguments. */

# endif
