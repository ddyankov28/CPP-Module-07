/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:38:15 by ddyankov          #+#    #+#             */
/*   Updated: 2023/11/06 15:44:36 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main()
{
    try
    {
        Array<int>emptyIntArr;LINE
        Array<int>intArr(5);LINE
        
        std::cout << emptyIntArr.size() << std::endl;LINE
        emptyIntArr = intArr;LINE
        
        std::cout << emptyIntArr.size() << std::endl;
        std::cout << intArr.size() << std::endl;LINE

        Array<std::string>stringArr(10);LINE
        Array<std::string>stringArr2(stringArr);LINE
        std::cout << stringArr.size() << std::endl;
        std::cout << stringArr2.size() << std::endl;LINE

        stringArr2[0] = "Wien";
        stringArr2[3] = "Sofia";
        stringArr2[9] = "Salzburg";
        unsigned int i = 0;
        while (i < stringArr2.size())
        {
            std::cout << stringArr2[i] << std::endl;
            i++;
        }
        std::cout << stringArr2[10] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << URED << "Exception: " << e.what() << RESET << std::endl;
    }
    
    return 0;
}
    
/*#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/
