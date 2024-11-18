/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:34:45 by luifer            #+#    #+#             */
/*   Updated: 2024/11/18 18:38:24 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
	//num1 is the default constructor
    Fixed num1;
	//num2 is the copy constructor
	Fixed num2(num1);
	//num3 is default constructor
	Fixed num3;
	num3 = num2;
	
	std::cout << num1.getRawBits() << std::endl;
	std::cout << num2.getRawBits() << std::endl;
	std::cout << num3.getRawBits() << std::endl;

	return (0);
}