// from server: 65% by atomic.potato
struct CXTIconHandle
{
    int __stdcall f(unsigned int* result, unsigned int value, unsigned int count);
};

int __stdcall CXTIconHandle::f(unsigned int* result, unsigned int value, unsigned int count)
{
    if (0xffffffffU - value < count)
        return (int)0x80070057U;
    *result = value + count;
    return 0;
}
