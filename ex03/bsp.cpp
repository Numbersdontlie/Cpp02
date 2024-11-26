/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:06:46 by luifer            #+#    #+#             */
/*   Updated: 2024/11/26 12:54:11 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool isSameSide(const Point& p1, const Point& p2, const Point& a, const Point& b){
    Fixed cp1 = (b.getX() - a.getX()) * (p1.getY() - a.getY()) -
                (b.getY() - a.getY()) * (p1.getX() - a.getX());
    Fixed cp2 = (b.getX() - a.getX()) * (p2.getY() - a.getY()) -
                (b.getY() - a.getY()) * (p2.getX() - a.getX());
    //same side if cross products have the same sign
    return cp1 * cp2 >= Fixed(0);
}

bool bsp(Point const a, Point const b, Point const c, Point const punto){
    return isSameSide(punto, a, b, c) && isSameSide(punto, b, c, a) && isSameSide(punto, c, a, b);
}