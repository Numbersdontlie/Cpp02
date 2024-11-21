/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:13:40 by luifer            #+#    #+#             */
/*   Updated: 2024/11/21 20:41:11 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
    Fixed a;//Default constructor
    Fixed const b(42);//int constructor
    Fixed const c(42.42f);//float constructor
    Fixed const d(b);//copy constructor

    a = Fixed(1986.1014f);

    std::cout << BLUE << "a is: " << a << RESET << std::endl;
    std::cout << BLUE << "b is: " << b << RESET << std::endl;
    std::cout << BLUE << "c is: " << c << RESET << std::endl;
    std::cout << BLUE << "d is: " << d << RESET << std::endl;

    std::cout << BLUE << "a as int:" << c.toInt() << RESET << std::endl;
    std::cout << BLUE << "b as int:" << b.toInt() << RESET << std::endl;
    std::cout << BLUE << "c as int:" << c.toInt() << RESET << std::endl;
    std::cout << BLUE << "d as int:" << d.toInt() << RESET << std::endl;
    
    std::cout << BLUE << "a as float" << a.toFloat() << RESET << std::endl;
    std::cout << BLUE << "b as float" << b.toFloat() << RESET << std::endl;
    std::cout << BLUE << "c as float" << c.toFloat() << RESET << std::endl;
    std::cout << BLUE << "d as float" << d.toFloat() << RESET << std::endl;

    return(0);
}
