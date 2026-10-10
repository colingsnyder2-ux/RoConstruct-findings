// from server: 39% by atomic.potato
extern "C" void __stdcall RaiseException(unsigned long, unsigned long, unsigned long, const unsigned long*);

struct CXTIconHandle
{
    short* data;
    int count;
    short* f(int);
};

short* CXTIconHandle::f(int index)
{
    if (index < 0 || index >= count)
    {
        RaiseException(0xc000008cUL, 1UL, 0UL, 0);
    }
    return data + index;
}
