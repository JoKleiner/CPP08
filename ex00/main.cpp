/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:19:06 by joklein           #+#    #+#             */
/*   Updated: 2025/07/14 15:10:16 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    int find_pos = 3;
    
    std::vector<int> arr = {1, 2, 3, 4};
    
    auto ret_value = easyfind(arr, arr[find_pos]);

    if(ret_value == arr.end())
    {
        std::cout << "Value not found" << std::endl;
        return 1;
    }
    std::cout << "array adrress:  " << &arr[find_pos] << std::endl;
    std::cout << "return adrress: " << &(*ret_value) << std::endl;
    std::cout << "position value: " << arr[find_pos] << std::endl;
    std::cout << "return value:   " << *ret_value << std::endl;
}
