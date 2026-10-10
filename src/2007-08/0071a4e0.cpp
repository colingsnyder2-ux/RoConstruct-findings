// from server: 29% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void __fastcall func_00719b40(void* self);

struct CXTPRibbonControlSystemPopupBarListItem
{
    void* construct();
};

void* CXTPRibbonControlSystemPopupBarListItem::construct()
{
    void* p = func_0062fef6(0x168);
    if (p == 0)
    {
        func_00719b40(p);
    }
    return p;
}
