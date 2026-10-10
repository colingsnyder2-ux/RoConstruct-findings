// from server: 31% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int);
extern "C" void __cdecl func_0048a8b0(void*, void*);

struct VPlayerSignalDesc
{
    void* construct(void* arg);
};

void* VPlayerSignalDesc::construct(void* arg)
{
    void* p = func_0062fef6(0x28);
    if (p)
    {
        func_0048a8b0(p, arg);
    }
    return p;
}
