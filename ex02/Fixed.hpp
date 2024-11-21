/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:41:23 by luifer            #+#    #+#             */
/*   Updated: 2024/11/21 21:21:33 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int pointValue;
        static const int fractional = 8;

    public:
        Fixed();//constructor
        ~Fixed();//destructor
        Fixed& operator = (const Fixed& entrada);//Copy assign operator
        Fixed(const Fixed& entrada);//Copy constructor
        Fixed(const int num);//constructor that initialize to an integer
        Fixed(const float num_float);//constructor that initializes to a float
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        //comparison
        bool operator>(const Fixed& otro) const;
        bool operator<(const Fixed& otro) const;
        bool operator>=(const Fixed& otro) const;
        bool operator<=(const Fixed& otro) const;
        bool operator==(const Fixed& otro) const;
        bool operator!=(const Fixed& otro) const;
        //arihtmetic
        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;
        //pre increase/decrease
        Fixed& operator++();
        Fixed& operator--();
        //post increase/decrease
        Fixed& operator++(int);
        Fixed& operator--(int);
        //static functions
        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
}