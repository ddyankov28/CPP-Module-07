/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:21:51 by ddyankov          #+#    #+#             */
/*   Updated: 2023/11/03 10:44:17 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

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
    public:
        Array();    // default constructor (no parameter)      
};


# endif