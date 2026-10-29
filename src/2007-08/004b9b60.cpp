// from server: 97% by colin
extern "C" void* __cdecl memset(void*, int, unsigned int);

struct RakPeer {
    void __cdecl shiftRight(unsigned int bitIndex, unsigned int* data);
};

void RakPeer::shiftRight(unsigned int bitIndex, unsigned int* data)
{
    unsigned int wordIndex = bitIndex >> 5;
    unsigned int bitOffset = bitIndex & 0x1f;

    if (wordIndex != 0)
    {
        int i = 15 - (int)wordIndex;
        if (i >= 0)
        {
            unsigned int* dst = data + i + wordIndex;
            do
            {
                *dst = data[i];
                --i;
                --dst;
            } while (i >= 0);
        }
        unsigned int count = wordIndex * 4;
        memset(data, 0, count);
    }

    if (bitOffset != 0)
    {
        unsigned int carry = 0;
        unsigned int shift = 32 - bitOffset;
        for (unsigned int j = 0; j < 16; ++j)
        {
            unsigned int cur = data[j];
            data[j] = (cur << bitOffset) | carry;
            carry = cur >> shift;
        }
    }
}
