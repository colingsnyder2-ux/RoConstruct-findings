// from server: 37% by atomic.potato
extern "C" void __stdcall RaiseException(unsigned long, unsigned long, unsigned long, const unsigned long*);

struct CXTIconHandle
{
    unsigned short* data;
    int count;
    unsigned short* f(int);
};

unsigned short* CXTIconHandle::f(int index)
{
    if (index < 0 || index >= count)
    {
        RaiseException(0xc000008cUL, 0, 1, 0);
    }
    return data + index;
}
