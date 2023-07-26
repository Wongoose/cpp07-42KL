/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:03:18 by zwong             #+#    #+#             */
/*   Updated: 2023/07/27 01:03:25 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define RESET "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

// Learning about templates in C++, used to write generic functions
// Create a single function to work with different data types by using a template.
template<typename T>
void swap(T &lhs, T &rhs) {
    T temp = lhs;
    lhs = rhs;
    rhs = temp;
}

template<typename T>
T &min(T &lhs, T &rhs) {
    if (rhs < lhs)
        return (rhs);
    else
        return (lhs);
}

template<typename T>
T &max(T &lhs, T &rhs) {
    if (rhs > lhs)
        return (rhs);
    else
        return (lhs);
}

#endif
