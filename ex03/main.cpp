/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:26:41 by luifer            #+#    #+#             */
/*   Updated: 2024/11/26 14:11:51 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(){
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    Point punto1(2, 2);
	Point punto2(0.8, 1.2);
	Point punto3(4, 9);
	Point punto4(15, 20);
	Point punto5(1, 1);
	Point punto6(0.98, 1.25);

    if(bsp(a, b, c, punto1)){
        std::cout << GREEN << "Point is inside the triangle 📐 📐" << RESET << std::endl;
    }
    else{
        std::cout << RED << "Point is outside the triangle ⛔ ⛔" << RESET << std::endl;
    }
    if(bsp(a, b, c, punto2)){
        std::cout << GREEN << "Point is inside the triangle 📐 📐" << RESET << std::endl;
    }
    else{
        std::cout << RED << "Point is outside the triangle ⛔ ⛔" << RESET << std::endl;
    }
	if(bsp(a, b, c, punto3)){
        std::cout << GREEN << "Point is inside the triangle 📐 📐" << RESET << std::endl;
    }
    else{
        std::cout << RED << "Point is outside the triangle ⛔ ⛔" << RESET << std::endl;
    }
	if(bsp(a, b, c, punto4)){
        std::cout << GREEN << "Point is inside the triangle 📐 📐" << RESET << std::endl;
    }
    else{
        std::cout << RED << "Point is outside the triangle ⛔ ⛔" << RESET << std::endl;
    }
	if(bsp(a, b, c, punto5)){
        std::cout << GREEN << "Point is inside the triangle 📐 📐" << RESET << std::endl;
    }
    else{
        std::cout << RED << "Point is outside the triangle ⛔ ⛔" << RESET << std::endl;
    }
	if(bsp(a, b, c, punto6)){
        std::cout << GREEN << "Point is inside the triangle 📐 📐" << RESET << std::endl;
    }
	else{
        std::cout << RED << "Point is outside the triangle ⛔ ⛔" << RESET << std::endl;
    }
	return 0;
}
