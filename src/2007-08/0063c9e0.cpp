// from server: 29% by colin
struct CXTPControlAction
{
    void construct();
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* __cdecl func_0063c9e0()
{
    CXTPControlAction* p = (CXTPControlAction*)operator_new(0x168);
    if (p == 0)
    {
        p->construct();
    }
    return p;
}
