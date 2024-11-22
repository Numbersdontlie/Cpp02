/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:16:28 by luifer            #+#    #+#             */
/*   Updated: 2024/11/22 09:49:10 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
    Fixed a(10.5f);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(4.25f);

    std::cout << "a:" << "b:" << b << std::endl;

    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << ++a << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << a++ << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << --a << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << a-- << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;

    //comparison
    std::cout << (a > b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a < c) << std::endl;
    std::cout << (a > c) << std::endl;
    std::cout << (b < c) << std::endl;
    std::cout << (b > c) << std::endl;

    std::cout << "Max:" << Fixed::max(a, b) << std::endl;
    std::cout << "Min:" << Fixed::max(a, b) << std::endl;
    std::cout << "Max:" << Fixed::max(a, c) << std::endl;
    std::cout << "Min:" << Fixed::max(a, c) << std::endl;
    return(0);
}