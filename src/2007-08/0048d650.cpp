// from server: 32% by colin
struct VPlayerSignalDesc
{
    void* create(void*);
};

struct Inner
{
    void* construct(void*, void*);
};

extern "C" void* __cdecl func_0062fef6(unsigned int);

void* VPlayerSignalDesc::create(void* arg)
{
    Inner* p = (Inner*)func_0062fef6(0x28);
    if (p)
    {
        p->construct(arg, this);
    }
    return p;
}
