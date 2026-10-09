// from server: 78% by colin
// roc 2007-08 0064ea90  unit: CXTPToolBar::CControlButtonHide  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ea90
//
// 0064ea90  83ec08               sub esp, 8
// 0064ea93  56                   push esi
// 0064ea94  8bf1                 mov esi, ecx
// 0064ea96  e865b5feff           call 0x63a000
// 0064ea9b  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0064eaa1  8b10                 mov edx, dword ptr [eax]
// 0064eaa3  8b92ac000000         mov edx, dword ptr [edx + 0xac]
// 0064eaa9  6a00                 push 0
// 0064eaab  6a01                 push 1
// 0064eaad  51                   push ecx
// 0064eaae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064eab2  56                   push esi
// 0064eab3  6a02                 push 2
// 0064eab5  51                   push ecx
// 0064eab6  8d4c241c             lea ecx, [esp + 0x1c]
// 0064eaba  51                   push ecx
// 0064eabb  8bc8                 mov ecx, eax
// 0064eabd  ffd2                 call edx
// 0064eabf  5e                   pop esi
// 0064eac0  83c408               add esp, 8
// 0064eac3  c20400               ret 4

struct CXTPToolBar_CControlButtonHide
{
    void m(int);
};

extern CXTPToolBar_CControlButtonHide* __fastcall func_0063a000();

void CXTPToolBar_CControlButtonHide::m(int arg)
{
    CXTPToolBar_CControlButtonHide* p = func_0063a000();
    int* vtbl = *(int**)p;
    void (__thiscall *fn)(void*, int, int, int, int, int, int, int) =
        (void (__thiscall *)(void*, int, int, int, int, int, int, int))*(int*)((char*)vtbl + 0xac);
    fn(p, arg, 2, (int)this, *(int*)((char*)this + 0xfc), 1, 0, 0);
}
