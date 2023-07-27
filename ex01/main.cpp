/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:35:20 by zwong             #+#    #+#             */
/*   Updated: 2023/07/27 20:36:25 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    std::cout << MAGENTA << "----- TESTING WITH INTEGERS -----" << std::endl << RESET;
    int num_arr[10];

    for (int i = 0; i < 10; i++) {
        srand(time(NULL) * i); // This just sets the seed, different pre-order of random numbers
        num_arr[i] = rand() % 10;
    }
    iter(num_arr, 10, myprint);
    std::cout << std::endl;

    std::cout << MAGENTA << "----- TESTING WITH CHAR -----" << std::endl << RESET;
    char str_arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    iter(str_arr, 7, myprint);
    std::cout << std::endl;

    std::cout << MAGENTA << "----- TESTING WITH CUSTOM CLASS -----" << std::endl << RESET;
    CustomInt my_arr[10];
    for (int i = 0; i < 10; i++) {
        srand(time(NULL) * i);
        CustomInt temp = CustomInt(rand() % 10);
        my_arr[i] = temp;
    }
    iter(my_arr, 10, myprint);
    std::cout << std::endl;
    return (0);
}
