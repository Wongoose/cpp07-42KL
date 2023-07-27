/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:33:55 by zwong             #+#    #+#             */
/*   Updated: 2023/07/27 10:47:07 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <time.h>

#define RESET "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

template<typename T>
void myprint(const T &target) {
    std::cout << CYAN << target << std::endl << RESET;
    return ;
}

template<typename T>
void iter(T *addr, int len, void(*f)(const T &target)) {
    for (int i = 0; i < len; i++) {
        f(addr[i]);
    }
    return ;
}

#endif
