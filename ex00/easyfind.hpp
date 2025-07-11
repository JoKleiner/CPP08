/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:18:35 by joklein           #+#    #+#             */
/*   Updated: 2025/07/11 12:44:44 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
auto easyfind(T &contain, int find)
{
	return (std::find(contain.begin(), contain.end(), find));
}

#endif


//auto here: typename T::iterator


// template <typename T>
// auto easyfind(T &array, int i)
// { 
//     for (size_t iter = 0; iter < sizeof(array) / sizeof(array[0]); iter++)
//         if (array[iter] == i)
//             return (&array[iter]);
//     return (static_cast<int *>(nullptr));
// }