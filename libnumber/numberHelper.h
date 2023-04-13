#ifndef LIBNUMBER_NUMBERHELPER_H
#define LIBNUMBER_NUMBERHELPER_H

#include "libnumber/containers/numberContainer.h"

class numberHelper_t {
   public:
    numberHelper_t(numberContainer_t number) : m_number(number) {}
    int getInteger();

   private:
    numberContainer_t m_number;
};

#endif
