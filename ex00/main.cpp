/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:19:06 by joklein           #+#    #+#             */
/*   Updated: 2025/07/11 11:41:04 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>

int main()
{
    int find_pos = 3;
    
    std::array<int, 5> arr;
    arr[0] = 2;
    arr[1] = 5;
    arr[2] = 10;
    arr[3] = 6;
    arr[4] = 7;
    
    auto ret_value = easyfind(arr, arr[find_pos]);

    if(ret_value == arr.end())
    {
        std::cout << "Value not found" << std::endl;
        return 1;
    }
    std::cout << "array adrress:  " << &arr[find_pos] << std::endl;
    std::cout << "result adrress: " << ret_value << std::endl;
    std::cout << *ret_value << std::endl;
}
