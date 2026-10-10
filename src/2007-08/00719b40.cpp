// from server: 51% by colin
struct CXTPRibbonControlSystemPopupBarListCaption
{
    char pad[0x164];
    int f();
};

extern "C" void __cdecl func_0063c810();
extern "C" void __cdecl func_0063a120();

int CXTPRibbonControlSystemPopupBarListCaption::f()
{
    func_0063c810();
    *(int*)((char*)this + 0x00) = 0x7e0434;
    *(int*)((char*)this + 0x20) = 0x7e03d4;
    func_0063a120();
    *(int*)((char*)this + 0x15c) = 0x12c;
    *(int*)((char*)this + 0x160) = 0x1b;
    return (int)this;
}
