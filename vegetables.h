//
// Created by ran on 2/5/20.
//

#include <type_traits>

#ifndef KITCHEN_CONCEPT_VEGETABLES_H
#define KITCHEN_CONCEPT_VEGETABLES_H

struct Tomato {
    using size = std::true_type;
};

#endif //KITCHEN_CONCEPT_VEGETABLES_H
