/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:59:46 by joklein           #+#    #+#             */
/*   Updated: 2025/07/14 16:06:07 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
    Span sp = Span(5);
	try{
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(12);
	}catch(const std::length_error &e){
		std::cerr << e.what() << std::endl;
	}
	
	try{
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}catch(const std::length_error &e){
		std::cerr << e.what() << std::endl;
	}

	Span sp2 = Span(100);
	std::random_device rd;
	try{
		for(size_t i = 0; i < 100; i++)
			sp2.addNumber(rd()%2147483647);
	}catch(const std::length_error &e){
		std::cerr << e.what() << std::endl;
	}

	try{
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	}catch(const std::length_error &e){
		std::cerr << e.what() << std::endl;
	}

}
