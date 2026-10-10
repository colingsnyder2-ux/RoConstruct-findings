// from server: 32% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void __cdecl func_00719be0(void*);

struct CXTPRibbonControlSystemPopupBarListCaption
{
    void* create();
};

void* CXTPRibbonControlSystemPopupBarListCaption::create()
{
    void* p = func_0062fef6(0x168);
    if (p != 0)
    {
        func_00719be0(p);
    }
    return p;
}
