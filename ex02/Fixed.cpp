/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 22:48:31 by luifer            #+#    #+#             */
/*   Updated: 2024/11/22 14:09:43 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default constructor initializing numeric value to zero
Fixed::Fixed(): pointValue(0){
    //std::cout << BLUE << "Default constructor called" << RESET << std::endl;
}

//Default constructor initializing to int provided as input
Fixed::Fixed(const int num){
    //std::cout << BLUE << "Integer constructor called" << RESET << std::endl;
    this->pointValue = num << fractional;
}

//Default constructor initializing to float provided as input
Fixed::Fixed(const float num_float){
    //std::cout << BLUE << "Float constructor called" << RESET << std::endl;
    this->pointValue = roundf(num_float * (1 << fractional));
}

//The copy constructor copies the value of another object
//it creates a new object as a copy of an existing
Fixed::Fixed(const Fixed &entrada){
    //std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
    pointValue = entrada.getRawBits();
}

//Copy assignment operator is used to copy the contents from an existing object
//to another existing object
Fixed& Fixed::operator=(const Fixed &entrada){
    //std::cout << BLUE << "Copy assignment operator have been called" << RESET << std::endl;
    if(this != &entrada)
        this->pointValue = entrada.getRawBits();
    return *this;
}

//Destructor
Fixed::~Fixed(void){
    //std::cout << RED << "Destructor have been called, Bye Bye object" << RESET << std::endl;
}

//Getter
int Fixed::getRawBits(void) const{
    //std::cout << BLUE << "getRawBits called:" << RESET << std::endl;
    return (this->pointValue);
}

//Setter
void Fixed::setRawBits(int const raw){
    //std::cout << BLUE << "setRawBits called:" << RESET << std::endl;
    pointValue = raw;
}

//Convert fixed-point value to float
float Fixed::toFloat(void) const{
    return ((float)this->pointValue / (1 << this->fractional));
}

//Convert fixed-point value to int
int Fixed::toInt(void) const{
    return (this->pointValue >> this->fractional);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
    os << fixed.toFloat();
    return os;
}

//Comparison operators
bool Fixed::operator>(const Fixed& otro) const {return this->pointValue > otro.getRawBits(); }
bool Fixed::operator<(const Fixed& otro) const {return this->pointValue < otro.getRawBits(); }
bool Fixed::operator>=(const Fixed& otro) const {return this->pointValue >= otro.getRawBits(); }
bool Fixed::operator<=(const Fixed& otro) const {return this->pointValue <= otro.getRawBits(); }
bool Fixed::operator==(const Fixed& otro) const {return this->pointValue == otro.getRawBits();}
bool Fixed::operator!=(const Fixed& otro) const {return this->pointValue != otro.getRawBits(); }

//Arithmetic operations
Fixed Fixed::operator+(const Fixed& otro) const{
    return (Fixed(this->toFloat() + otro.toFloat()));
}

Fixed Fixed::operator-(const Fixed& otro) const{
    return (Fixed(this->toFloat() - otro.toFloat()));
}

Fixed Fixed::operator*(const Fixed& otro) const{
    return (Fixed(this->toFloat() * otro.toFloat()));
}

Fixed Fixed::operator/(const Fixed& otro) const{
    if (otro.pointValue == 0)
        std::cerr << RED << "Division by 0!"<< RESET << std::endl;
    return (Fixed(this->toFloat() / otro.toFloat()));
}

//Increase-decrease pre operators
Fixed& Fixed::operator++(){
    this->pointValue++;
    return *this;
}

Fixed& Fixed::operator--(){
    this->pointValue--;
    return *this;
}

//Increase-decrease post operators
//Create a copy of current object tmp. increment the current object *this
//the copy of temp is returned by value
Fixed Fixed::operator++(int){
    Fixed temp = *this;
    //++(*this);
    pointValue++;
    return (temp);
}

Fixed Fixed::operator--(int){
    Fixed temp = *this;
    //--(*this);
    pointValue--;
    return (temp);
}

//Min and Max
Fixed& Fixed::min(Fixed& a, Fixed& b){
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    return (a > b) ? a : b;
}