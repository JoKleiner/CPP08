/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:47:09 by joklein           #+#    #+#             */
/*   Updated: 2025/07/16 10:56:47 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {};
        MutantStack(MutantStack const &other){*this = other;};
        ~MutantStack() {};
        MutantStack &operator=(MutantStack const &other) {
            if(this != &other)
                return(std::stack<T>::operator=(other));
            return(*this);
        };

        using cont                      = typename std::stack<T>::container_type;
        using iterator                  = typename cont::iterator;
        using const_iterator            = typename cont::const_iterator;
        using reverse_iterator          = typename cont::reverse_iterator;
        using const_reverse_iterator    = typename cont::const_reverse_iterator;

        iterator begin() {  return this->c.begin(); };
        iterator end()   {  return this->c.end();   };
        const_iterator begin() const {  return this->c.begin();  };
        const_iterator end()   const {  return this->c.end();    };
        reverse_iterator rbegin() {  return this->c.rbegin();  };
        reverse_iterator rend()   {  return this->c.rend();    };
        const_reverse_iterator rbegin() const {  return this->c.rbegin();  };
        const_reverse_iterator rend()   const {  return this->c.rend();    };
};

#include "MutantStack.tpp"
