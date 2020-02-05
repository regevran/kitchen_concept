//
// Created by ran on 2/5/20.
//

#ifndef KITCHEN_CONCEPT_KITCHEN_CONCEPTS_H
#define KITCHEN_CONCEPT_KITCHEN_CONCEPTS_H

template<typename T>
concept HasSize = requires(){ typename T::size; };

template<typename T>
concept HasCalories = requires(){ typename T::calories; };

template<typename T>
concept IsWater = requires(){ !T::calories; };

template<typename T>
concept Ingridient =
(HasSize<T> && HasCalories<T>) || IsWater<T>;


template<typename T>
concept Sliceable = Ingridient<T>;


#endif //KITCHEN_CONCEPT_KITCHEN_CONCEPTS_H
