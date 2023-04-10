#include <cstdio>
#include "fooComponent.h"
#include "libbar/barHelper.h"

int main() {
    fooComponent_t fooComponent{};
    barHelper_t barHelper{fooComponent.createNumber()};
    std::printf("Bar helper has number %d\n", barHelper.getNumber());
}
