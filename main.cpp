

#include "kitchen_concepts.h"
#include "vegetables.h"

template<Sliceable T>
void cut(T t);

int main() {
    Tomato t;
    cut(t);

    return 0;
}

