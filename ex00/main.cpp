/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:48:03 by ddyankov          #+#    #+#             */
/*   Updated: 2023/11/06 15:47:05 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

int main()
{
    int a = 2;
    int b = 3;
  
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;LINE

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;LINE

    bool one = false;
    bool two = true;

    ::swap(one, two);
    std::cout << std::boolalpha << "bool one = " << one << ", bool two = " << two << std::endl;
    std::cout << std::boolalpha << "min ( one, two ) = " << ::min( one, two ) << std::endl;
    std::cout << std::boolalpha << "max ( one, two ) = " << ::max( one, two ) << std::endl;LINE

    double x = 2.4;
    double y = 3.6;

    ::swap(x, y);
    std::cout << "double x = " << x << ", double y = " << y << std::endl;
    std::cout << "min ( x, y ) = " << ::min( x, y ) << std::endl;
    std::cout << "max ( x, y ) = " << ::max( x, y ) << std::endl;LINE
    
    return 0;
}
