// from server: 32% by colin
extern "C" void* __stdcall sub_0062FEF6(unsigned int);
extern "C" void* __stdcall sub_0077E69C(void*, const void*);

struct VPlayerSignalDesc
{
    void* field0;
    int field4;
    void* field8;
    void* construct(void* src, int unused);
};

void* VPlayerSignalDesc::construct(void* src, int unused)
{
    field0 = src;
    field4 = 2;
    void* mem = sub_0062FEF6(0x1c);
    if (mem)
    {
        mem = sub_0077E69C(mem, src);
    }
    else
    {
        mem = 0;
    }
    field8 = mem;
    return this;
}
