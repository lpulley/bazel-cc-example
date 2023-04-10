#include <cstdio>
#include "libnumber/numberCreator.h"
#include "libnumber/numberHelper.h"
#include "libnumber/containers/numberContainer.h"

int main() {
    numberCreator_t numberCreator{};
    numberContainer_t number = numberCreator.createNumber();
    numberHelper_t numberHelper{number};
    std::printf("Integer is %d\n", numberHelper.getInteger());
}
