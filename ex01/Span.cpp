/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:00:01 by joklein           #+#    #+#             */
/*   Updated: 2025/07/15 14:13:16 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : m_size(n){
}

Span::Span(const Span &other) : m_size(other.m_size){
    this->m_array = other.m_array;
}

void Span::addNumber(int i){
    if (m_array.size() >= m_size) {
        throw (std::length_error("Out of bounds"));
    }
    m_array.push_back(i);
}

int Span::shortestSpan(){
    if (m_array.size() <= 1) {
        throw (std::length_error("not enough values"));
    }
    auto sort = m_array; 
    std::sort(sort.begin(), sort.end());
    int short_span = sort[1] - sort[0];
    for(size_t i = 1; i < sort.size(); i++)
        if(sort[i] - sort[i-1] < short_span)
            short_span = sort[i] - sort[i-1];
    return(short_span);
}

int Span::longestSpan(){
    if (m_array.size() <= 1) {
        throw (std::length_error("not enough values"));
    }
    auto sort = m_array; 
    std::sort(sort.begin(), sort.end());
    return(*(sort.end()-1) - sort[0]);
}

void Span::add_multiple_num(unsigned int num){
    std::random_device rd;
    std::vector<int> temp_array;
    
    for(size_t i = 0; i < num; i++)
        temp_array.push_back(rd()%2147483647);
    
    if(this->m_size < this->m_array.size() + temp_array.size())
        throw(std::length_error("Out of bounds"));
    this->m_array.insert(this->m_array.end(), temp_array.begin(), temp_array.end());
}
