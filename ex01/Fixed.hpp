/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:54:22 by lperez-h          #+#    #+#             */
/*   Updated: 2024/11/18 19:13:11 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
        int num_value;
        static const int fractional;
	
	//need to add here:
    public:
        Fixed();//constructor
        ~Fixed();//destructor
        Fixed& operator = (const Fixed& src);//Copy assign operator
        Fixed(const Fixed& src);//Copy constructor
		Fixed(const int& src);//Copy constructor

        int getRawBits(void) const;
        void setRawBits(int const raw);
}