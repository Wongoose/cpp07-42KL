/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:35:20 by zwong             #+#    #+#             */
/*   Updated: 2023/07/27 10:24:27 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class CustomInt;

int main() {
    std::cout << MAGENTA << "----- TESTING WITH INTEGERS -----" << std::endl << RESET;
    int a = 5;
    int b = 12;

    std::cout << YELLOW << "Before swap, a = " << a << ", and b = " << b << std::endl << RESET;
    ::swap(a, b);
    std::cout << "After swap, a = " << GREEN << a << RESET << ", and b = " << GREEN << b << RESET << std::endl;
    std::cout << "Minimum number is: " << GREEN << ::min(a, b) << std::endl << RESET;
    std::cout << "Maximum number is: " << GREEN << ::max(a, b) << std::endl << RESET;
    std::cout << std::endl;
    
    std::cout << MAGENTA << "----- TESTING WITH STRINGS -----" << std::endl << RESET;
    // String comparison is by alphabetical order (ASCII) of the 1st char only. Where B is larger then A.
    std::string s1 = "hello";
    std::string s2 = "gworld";

    std::cout << YELLOW << "Before swap, s1 = " << s1 << ", and s2 = " << s2 << std::endl << RESET;
    ::swap(s1, s2);
    std::cout << "After swap, s1 = " << GREEN << s1 << RESET << ", and s2 = " << GREEN << s2 << RESET << std::endl;
    std::cout << "Minimum string is: " << GREEN << ::min(s1, s2) << std::endl << RESET;
    std::cout << "Maximum string is: " << GREEN << ::max(s1, s2) << std::endl << RESET;
    std::cout << std::endl;

    std::cout << MAGENTA << "----- TESTING WITH CUSTOM CLASS -----" << std::endl << RESET;
    // To be coded...
    CustomInt num1 = CustomInt(42);
    CustomInt num2 = CustomInt(101);

    std::cout << YELLOW << "Before swap, num1 = " << num1 << ", and num2 = " << num2 << std::endl << RESET;
    swap(num1, num2);
    std::cout << "After swap, num1 = " << GREEN << num1 << RESET << ", and num2 = " << GREEN << num2 << RESET << std::endl;
    std::cout << "Minimum string is: " << GREEN << ::min(num1, num2) << std::endl << RESET;
    std::cout << "Maximum string is: " << GREEN << ::max(num1, num2) << std::endl << RESET;
    std::cout << std::endl;
    return (0);
}
