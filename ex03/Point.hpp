/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:28:14 by luifer            #+#    #+#             */
/*   Updated: 2024/11/22 10:33:14 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define RESET "\033[0m"

class Point
{
    private:
        const Fixed x;
        const Fixed y;

    public:
        //Constructors
        Point();
        ~Point();
        Point(const float x, const float y);
        Point(const Point& otro);
        //Assignment operator
        Point& operator=(const Point& otro);
        //Getters
        const Fixed& getX() const;
        const Fixed& getY() const;
};

bool bsp(const Point& a, const Point& b, const Point& c, const Point& punto);

#endif