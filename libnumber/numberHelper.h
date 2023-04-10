#ifndef NUMBERHELPER_H
#define NUMBERHELPER_H

#include "containers/numberContainer.h"

class numberHelper_t {
   public:
    numberHelper_t(numberContainer_t number) : m_number(number) {}
    int getInteger();

   private:
    numberContainer_t m_number;
};

#endif
