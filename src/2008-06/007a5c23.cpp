// from server: 68% by atomic.potato
extern "C" void __stdcall RaiseException(unsigned long, unsigned long, unsigned long, const unsigned long *);

struct CXTIconHandle
{
    int *data;
    int count;
    int get(int index);
};

int CXTIconHandle::get(int index)
{
    if (index >= 0 && index < count)
        return data[index];

    RaiseException(0xc000008cUL, 1, 0, 0);
    return 0;
}
