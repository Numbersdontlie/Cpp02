/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:54:22 by lperez-h          #+#    #+#             */
/*   Updated: 2024/11/21 19:17:39 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define RESET "\033[0m"

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
};

//Overload insertion operator for output
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif