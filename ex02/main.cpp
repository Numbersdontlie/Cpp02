/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:16:28 by luifer            #+#    #+#             */
/*   Updated: 2024/11/26 12:13:46 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
the binary value of 8 bits is 256 ( 2 + 4 + 8 + 16 + 32 + 64 + 128 = 256 )
a is initialised to 0 (0 / 256 = 0)
++a increments _fixedPointValue by 1 which in floating point is 
approximately 0.00390625 (1 / 256 ~= 0.00390625)
a++ increments _fixedPointValue by 0.00390625 + 0.00390625 = 0.0078125

b is initialised to( 5.05 * 256 ~= 1293) * (2 *256 = 512) / 256 ~= 2586
which is approx 10.1
*/

int main(void){
    Fixed a(10.5f);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(4.25f);

    std::cout << "a: " << a << " b: " << b << " c:" << c << std::endl;

    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << ++a << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;
    std::cout << BLUE << a++ << RESET << std::endl;
    std::cout << BLUE << a << RESET << std::endl;

    //comparison
    std::cout << GREEN << (a > b) << RESET << std::endl;
    std::cout << GREEN << (a >= b) << RESET << std::endl;
    std::cout << GREEN << (a < b) << RESET << std::endl;
    std::cout << GREEN << (a <= b) << RESET << std::endl;
    std::cout << GREEN << (a < c) << RESET << std::endl;
    std::cout << GREEN << (a <= c) << RESET << std::endl;
    std::cout << GREEN << (a > c) << RESET << std::endl;
    std::cout << GREEN << (a >= c) << RESET << std::endl;
    std::cout << GREEN << (b < c) << RESET << std::endl;
    std::cout << GREEN << (b > c) << RESET << std::endl;

	//arithmetic
	std::cout << GREEN << "sum is: " << (a + b) << RESET << std::endl;
	std::cout << GREEN << "substract is: " << (a - b) << RESET << std::endl;
	std::cout << GREEN << "multiplication is: " << (a * b) << RESET << std::endl;
	std::cout << GREEN << "division is: " << (a / b) << RESET << std::endl;

    //Max and Min
    std::cout << BLUE << "Max:" << Fixed::max(a, b) << RESET << std::endl;
    std::cout << BLUE << "Min:" << Fixed::min(a, b) << RESET << std::endl;
    std::cout << BLUE << "Max:" << Fixed::max(b, c) << RESET << std::endl;
    std::cout << BLUE << "Min:" << Fixed::min(b, c) << RESET << std::endl;
    std::cout << BLUE << "Max:" << Fixed::max(a, c) << RESET << std::endl;
    std::cout << BLUE << "Min:" << Fixed::min(a, c) << RESET << std::endl;
    return(0);
}