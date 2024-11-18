/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:21:04 by luifer            #+#    #+#             */
/*   Updated: 2024/11/17 20:33:21 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

//Default constructor initializing numeric value to zero
Fixed::Fixed(void): num_value(0){
    std::cout << BLUE << "Default constructor called" << RESET << std::endl;
}

//The copy constructor create a new object as a copy of an existing object
Fixed::Fixed(const Fixed &src){
    std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
    this->num_value = src.getRawBits();
}

//Copy assignment operator is used to copy the contents from an existing object
//to another existing object
Fixed& Fixed::operator=(const Fixed &src){
    std::cout << BLUE << "Copy assignment operator have been called" << RESET << std::endl;
    if(this != &src)
        this->num_value = src.getRawBits();
    return *this;
}

//Destructor
Fixed::~Fixed(void){
    std::cout << RED << "Destructor have been called, Bye Bye object" << RESET << std::endl;
}

//getter
int Fixed::getRawBits(void) const{
    std::cout << "getRawBits called" << RESET << std::endl;
    return (this->num_value);
}

//setter
int Fixed::setRawBits(int const raw){
    std::cout << BLUE << "setRawBits called:" << RESET << std::endl;
    this->num_value = raw;
}
