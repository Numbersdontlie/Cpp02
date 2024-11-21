/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:48:58 by luifer            #+#    #+#             */
/*   Updated: 2024/11/21 15:44:02 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define RESET "\033[0m"

class Fixed
{
    private:
        int num_value;
        static const int fractional = 8;

    public:
        Fixed();//constructor
        ~Fixed();//destructor
        Fixed& operator = (const Fixed& entrada);//Copy assign operator
        Fixed(const Fixed& entrada);//Copy constructor

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif