/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:34:45 by luifer            #+#    #+#             */
/*   Updated: 2024/11/21 15:54:43 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
    //Default constructor
    Fixed a;
    //copy constructor
    Fixed b(a);
    //Default constructor
    Fixed c;
    //copy assignment operator constructor
    c = a;

    std::cout << BLUE << "raw value of a: " << a.getRawBits() << RESET << std::endl;
    std::cout << BLUE << "raw value of b: " << b.getRawBits() << RESET << std::endl;
    std::cout << BLUE << "raw value of c: " << c.getRawBits() << RESET << std::endl;
    return 0;
}
