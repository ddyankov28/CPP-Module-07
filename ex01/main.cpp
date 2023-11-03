/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:27:24 by ddyankov          #+#    #+#             */
/*   Updated: 2023/11/03 10:52:18 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main()
{
    int intArray[] = { 12, 44, 42, 33, 126 };
    std::cout << RED << " << Integer array with >> " << RESET << std::endl;
    iter(intArray, sizeof(intArray) / sizeof(intArray[0]), printElement);LINE

    std::string stringArray[] = { "Wien" , "Sofia" , "Graz", "Salzburg" };
    std::cout << GREEN << " << String array with >> " << RESET << std::endl;
    iter(stringArray, sizeof(stringArray) / sizeof(stringArray[0]), printElement);LINE

    double doubleArray[] = { 2.4, 7.7, 8.6, 24.5, 42.2 };
    std::cout << CYAN << " << Double array with >> " << RESET << std::endl;
    iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), printElement);LINE

    bool boolArray[] = { true, false, true, true };
    std::cout << YELLOW << " << Bool array with >> " << RESET << std::endl;
    iter(boolArray, sizeof(boolArray) / sizeof(boolArray[0]), printElement);LINE

    return 0;
}
