/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:47:35 by luifer            #+#    #+#             */
/*   Updated: 2024/11/21 20:01:48 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

//Default constructor initializing numeric value to zero
Fixed::Fixed(): pointValue(0){
    std::cout << BLUE << "Default constructor called" << RESET << std::endl;
}

//Default constructor initializing to int provided as input
Fixed::Fixed(const int num){
    std::cout << BLUE << "Integer constructor called" << RESET << std::endl;
    this->pointValue = num << fractional;
}

//Default constructor initializing to float provided as input
Fixed::Fixed(const float num_float){
    std::cout << BLUE << "Float constructor called" << RESET << std::endl;
    this->pointValue = roundf(num_float * (1 << fractional));
}

//The copy constructor copies the value of another object
//it creates a new object as a copy of an existing
Fixed::Fixed(const Fixed &entrada){
    std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
    *this = entrada;
}

//Copy assignment operator is used to copy the contents from an existing object
//to another existing object
Fixed& Fixed::operator=(const Fixed &entrada){
    std::cout << BLUE << "Copy assignment operator have been called" << RESET << std::endl;
    if(this != &entrada)
        this->pointValue = entrada.getRawBits();
    return *this;
}

//Destructor
Fixed::~Fixed(void){
    std::cout << RED << "Destructor have been called, Bye Bye object" << RESET << std::endl;
}

//Getter
int Fixed::getRawBits(void) const{
    std::cout << BLUE << "getRawBits called:" << RESET << std::endl;
    return (this->pointValue);
}

//Setter
void Fixed::setRawBits(int const raw){
    std::cout << BLUE << "setRawBits called:" << RESET << std::endl;
    pointValue = raw;
}

//Convert fixed-point value to float
float Fixed::toFloat(void) const{
    return ((float)pointValue / (1 << fractional));
}

//Convert fixed-point value to int
int Fixed::toInt(void) const{
    return (this->pointValue >> fractional);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
    os << fixed.toFloat();
    return os;
}
