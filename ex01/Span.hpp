/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:59:59 by joklein           #+#    #+#             */
/*   Updated: 2025/07/15 14:21:24 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
# include <random>

class Span
{
    private:
        Span();
    
    public:
        Span(unsigned int n);
        Span(const Span &other);
        ~Span() = default;
    
        void addNumber(int i);
        int shortestSpan();
        int longestSpan();
        void add_multiple_num(unsigned int num);
        
    private:
        const unsigned int m_size;
        std::vector<int> m_array;
};

# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define DEFAULT "\033[39m"
