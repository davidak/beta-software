#ifndef CMVADAPTER_H
#define CMVADAPTER_H

#include "MemoryAdapter.h"

class CMVAdapter : public MemoryAdapter
{
    uint32_t address = 0x60000000;
    uint32_t memorySize = 0x00020000;

    //uint32_t* mappedAddress;

public:
    CMVAdapter();

    ~CMVAdapter();

    void SetGain(unsigned int gain, unsigned int adcRAnge);

    void SetCMVRegister(u_int8_t registerIndex, unsigned int value);

    void Execute();
};

#endif // CMVADAPTER_H
