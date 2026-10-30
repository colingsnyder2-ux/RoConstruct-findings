// from server: 95% by colin
extern "C" void __cdecl memset(void*, int, unsigned int);

struct RakPeer
{
    unsigned int data[8];
    void __cdecl ShiftRightBits(unsigned int bitOffset);
};

void RakPeer::ShiftRightBits(unsigned int bitOffset)
{
    unsigned int wordOffset = bitOffset >> 5;
    unsigned int bitShift = bitOffset & 0x1f;

    if (wordOffset != 0)
    {
        int i = 7 - (int)wordOffset;
        if (i >= 0)
        {
            unsigned int* dst = data + i + wordOffset;
            do
            {
                *dst = data[i];
                --i;
                --dst;
            } while (i >= 0);
        }
        memset(data, 0, wordOffset * 4);
    }

    if (bitShift != 0)
    {
        unsigned int carry = 0;
        unsigned int invShift = 32 - bitShift;
        int i;
        for (i = 0; i < 8; ++i)
        {
            unsigned int cur = data[i];
            data[i] = (cur << bitShift) | carry;
            carry = cur >> invShift;
        }
    }
}
