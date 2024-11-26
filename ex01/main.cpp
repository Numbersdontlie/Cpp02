/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:13:40 by luifer            #+#    #+#             */
/*   Updated: 2024/11/26 12:06:32 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
    Fixed a;//Default constructor
    Fixed const b(42);//int constructor
    Fixed const c(42.42f);//float constructor
    Fixed const d(b);//copy constructor

    a = Fixed(1986.1014f);

    std::cout << BLUE << "value of a is: " << a << RESET << std::endl;
    std::cout << BLUE << "value of b is: " << b << RESET << std::endl;
    std::cout << BLUE << "value of c is: " << c << RESET << std::endl;
    std::cout << BLUE << "value of d is: " << d << RESET << std::endl;

    std::cout << BLUE << "value of a as int: " << a.toInt() << RESET << std::endl;
    std::cout << BLUE << "value of b as int: " << b.toInt() << RESET << std::endl;
    std::cout << BLUE << "value of c as int: " << c.toInt() << RESET << std::endl;
    std::cout << BLUE << "value of d as int: " << d.toInt() << RESET << std::endl;
    
    std::cout << BLUE << "value of a as float " << a.toFloat() << RESET << std::endl;
    std::cout << BLUE << "value of c as float " << c.toFloat() << RESET << std::endl;

    return(0);
}
