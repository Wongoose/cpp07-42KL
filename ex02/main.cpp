/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:35:20 by zwong             #+#    #+#             */
/*   Updated: 2023/10/05 12:01:02 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// Learn to create my own Array template where I can create with any data type
// Normally it is, int var[10]; Now I can do, Array<int> var_name(<constructor args>).
// Basically means it is an Array, but I can add more data inside next time!
// - My own validation
// - My own error checks/messages
int main() {
    std::cout << MAGENTA << "----- TESTING CREATION OF TEMPLATE VS SYSTEM -----" << std::endl << RESET;
    Array<int> int_arr(10);
    int *int_check = new int[10];
    std::cout << GREEN << "CREATED Array<int> with no issue!" << std::endl << RESET;
    std::cout << YELLOW << "Attempting to add numbers 1-10 into Array<int>..." << std::endl << RESET;
    for (int i = 0; i < 10; i++) {
        int_arr[i] = i;
        int_check[i] = i;;
    }
    std::cout << YELLOW << "Comparing numbers Array<int> vs int *..." << std::endl << RESET;
    for (int i = 0; i < 10; i++) {
        std::cout << CYAN << "Value at i [" << i << "] " << GREY << "Array<int>: " << int_arr[i] << " | " << "int *: " << int_check[i] << std::endl << RESET;
    }
    std::cout << GREEN << "SUCCESS! Create and adding Array<int> DONE!" << std::endl << RESET;
    std::cout << std::endl;

    // Copy and assignement operator
    std::cout << MAGENTA << "----- TESTING DEEP COPY -----" << std::endl << RESET;
    Array<int> copy_arr = int_arr;
    // Array<int> copy_arr(int_arr);
    std::cout << YELLOW << "Attempting to change value in a copied array..." << std::endl << RESET;
    copy_arr[0] = 42;
    for (int i = 0; i < 10; i++) {
        std::cout << CYAN << "Value at i [" << i << "] " << GREY << "(original) int_arr: " << int_arr[i] << " | " << "(copy) copy_arr: " << copy_arr[i] << std::endl << RESET;
    }
    std::cout << GREEN << "SUCCESS! Original array did not change, meaning it is a deep copy!" << std::endl << RESET;
    std::cout << std::endl;
    
    // [] operators setting value, out of bound, delete
    std::cout << MAGENTA << "----- TESTING ACCESS ARRAY OUT OF BOUND [] -----" << std::endl << RESET;
    std::cout << YELLOW << "Attempting to access int_arr[-1]..." << std::endl << RESET;
    try {
        int_arr[-1] = 42;
    } catch (std::exception &err) {
        std::cout << RED << "Failed with exception: " << err.what() << std::endl << RESET;
    }
    std::cout << YELLOW << "Attempting to access int_arr[1000]..." << std::endl << RESET;
    try {
        int_arr[1000] = 42;
    } catch (std::exception &err) {
        std::cout << RED << "Failed with exception: " << err.what() << std::endl << RESET;
    }
    std::cout << YELLOW << "Attempting to access int_arr[5]..." << std::endl << RESET;
    try {
        int_arr[5] = 42;
    } catch (std::exception &err) {
        std::cout << RED << "Failed with exception: " << err.what() << std::endl << RESET;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << CYAN << "int_arr index " << "[" << i << "]: " << GREY << int_arr[i] << std::endl << RESET;
    }
    std::cout << GREEN << "SUCCESS! Program throws exceptions when accessing out of bounds!" << std::endl << RESET;
    std::cout << std::endl;

    // Array<std::string>
    std::cout << MAGENTA << "----- EXTRA TESTING WITH Array<std::string> -----" << std::endl << RESET;
    Array<std::string> str_arr(10);
    std::string *str_check = new std::string[10];
    std::cout << GREEN << "CREATED Array<std::string> with no issue!" << std::endl << RESET;
    std::cout << YELLOW << "Attempting to add numbers strings into Array<std::string>..." << std::endl << RESET;
    for (int i = 0; i < 10; i++) {
        str_arr[i] = "hello world";
        str_check[i] = "no way you can do it";
    }
    std::cout << YELLOW << "Comparing numbers Array<std::string> vs std::string *..." << std::endl << RESET;
    for (int i = 0; i < 10; i++) {
        std::cout << CYAN << "Value at i [" << i << "] " << GREY << "Array<std::string>: " << str_arr[i] << " | " << "std::string *: " << str_check[i] << std::endl << RESET;
    }
    std::cout << GREEN << "SUCCESS! Create and adding Array<std::string> DONE!" << std::endl << RESET;
    std::cout << std::endl;
    return (0);
}
