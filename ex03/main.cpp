/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:26:41 by luifer            #+#    #+#             */
/*   Updated: 2024/11/26 12:55:30 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(){
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    Point punto(2, 2);

    if(bsp(a, b, c, punto)){
        std::cout << GREEN << "Point is inside the triangle" << RESET << std::endl;
    }
    else{
        std::cout << RED << "Point is outside the triangle" << RESET << std::endl;
    }

    Point outsidePoint(6, 6);
    if(bsp(a, b, c, outsidePoint)){
        std::cout << GREEN << "Point is inside the triangle" << RESET << std::endl;
    }
    else{
        std::cout << RED << "Point is outside the triangle" << RESET << std::endl;
    }
    return (0);
}
