/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:35:20 by zwong             #+#    #+#             */
/*   Updated: 2023/07/27 10:48:07 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class CustomInt;

int main() {
    std::cout << MAGENTA << "----- TESTING WITH INTEGERS -----" << std::endl << RESET;
    int num_arr[10];

    for (int i = 0; i < 10; i++) {
        srand(time(NULL) * i); // This just sets the seed, different pre-order of random numbers
        num_arr[i] = rand() % 10;
    }

    iter(num_arr, 10, myprint);
    return (0);
}
