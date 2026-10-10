// from server: 59% by tester
extern "C" void __cdecl func_00630b8c(void*, int, unsigned int);

struct RakPeer
{
    void __cdecl func_004b9db0(unsigned int bitOffset);
};

void RakPeer::func_004b9db0(unsigned int bitOffset)
{
    unsigned int* data = (unsigned int*)this;
    unsigned int wordIndex = bitOffset >> 5;
    unsigned int bitIndex = bitOffset & 0x1f;

    if (wordIndex != 0)
    {
        int i = 3 - (int)wordIndex;
        if (i >= 0)
        {
            unsigned int* dst = data + (i + wordIndex);
            do
            {
                *dst = data[i];
                --i;
                --dst;
            } while (i >= 0);
        }

        func_00630b8c(data, 0, wordIndex * 4);
    }

    if (bitIndex != 0)
    {
        unsigned int w0 = data[0];
        unsigned int w1 = data[1];
        unsigned int w2 = data[2];
        unsigned int w3 = data[3];

        data[0] = w0 << bitIndex;
        data[1] = (w1 << bitIndex) | (w0 >> (32 - bitIndex));
        data[2] = (w2 << bitIndex) | (w1 >> (32 - bitIndex));
        data[3] = (w3 << bitIndex) | (w2 >> (32 - bitIndex));
    }
}
