/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:59:59 by joklein           #+#    #+#             */
/*   Updated: 2025/07/14 16:05:49 by joklein          ###   ########.fr       */
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
        void multiple_num(Span *sp, unsigned int num);

        std::vector<int>::iterator begin() { return m_array.begin(); }
        std::vector<int>::iterator end() { return m_array.end(); }
        
    private:
        const unsigned int m_size;
        std::vector<int> m_array;
};
