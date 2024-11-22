/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:33:24 by luifer            #+#    #+#             */
/*   Updated: 2024/11/22 13:34:54 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//Default constructor
Point::Point(): x(0), y(0) {
    std::cout << BLUE << "Default constructor Point called" << RESET << std::endl;
}

//parametrized constructor
Point::Point(const float x, const float y) : x(x), y(y) {
    std::cout << BLUE << "Parametrized constructor Point called" << RESET << std::endl;
}

//Copy constructor
Point::Point(const Point& otro) : x(otro.x), y(otro.y) {
    std::cout << BLUE << "Copy constructor Point called" << RESET << std::endl;
}

//Assignment operator
Point& Point::operator=(const Point& otro){
    //x and y are const, so we can't reassign them
    //this ensures assignment is prohibited
    (void)otro;
    return *this;
}

//Destructor
Point::~Point() {
    std::cout << RED << "Destructor Point have been called" << RESET << std::endl;
}

//Getters
const Fixed& Point::getX() const{
    return x;
}

const Fixed& Point::getY() const{
    return y;
}
