/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:59:46 by joklein           #+#    #+#             */
/*   Updated: 2025/07/15 14:26:25 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	
	std::cout << RED << "\nSpan1: 1 out of bounds" << DEFAULT << std::endl;
    Span sp(5);
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
	std::cout << "short: " << sp.shortestSpan() << std::endl;
	std::cout << "long:  " << sp.longestSpan() << std::endl;
	}catch(const std::length_error &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << RED << "\nSpan2: 100 rmd numbers from 0 to max_int" << DEFAULT << std::endl;
	Span sp2(100);
	std::random_device rd;
	try{
		for(size_t i = 0; i < 100; i++)
			sp2.addNumber(rd()%2147483647);
	}catch(const std::length_error &e){
		std::cerr << e.what() << std::endl;
	}

	try{
	std::cout << "short: "<< sp2.shortestSpan() << std::endl;
	std::cout << "long:  " << sp2.longestSpan() << std::endl;
	}catch(const std::length_error &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << RED << "\nSpan3: 100/10000 rmd numbers from 0 to max_int" << DEFAULT << std::endl;
	Span sp3(10000);
	try{
	sp3.add_multiple_num(100);
	std::cout << "100 short: "<< sp3.shortestSpan() << std::endl;
	std::cout << "100 long:  " << sp3.longestSpan() << std::endl;
	sp3.add_multiple_num(9900);
	std::cout << "10000 short: "<< sp3.shortestSpan() << std::endl;
	std::cout << "10000 long:  " << sp3.longestSpan() << std::endl;
	}catch(const std::length_error &e){
		std::cerr << e.what() << std::endl;
	}
}
