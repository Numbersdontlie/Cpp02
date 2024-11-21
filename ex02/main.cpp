/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:16:28 by luifer            #+#    #+#             */
/*   Updated: 2024/11/22 00:53:12 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << ++a << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << a++ << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << --a << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << a-- << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;
    

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;
    return(0);
}