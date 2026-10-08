// from server: 83% by colin
// roc 2007-08 00643bf0  unit: CXTPCommandBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643bf0
//
// 00643bf0  e88bfdffff           call 0x643980
// 00643bf5  85c0                 test eax, eax
// 00643bf7  7501                 jne 0x643bfa
// 00643bf9  c3                   ret 
// 00643bfa  8b10                 mov edx, dword ptr [eax]
// 00643bfc  8bc8                 mov ecx, eax
// 00643bfe  8b4264               mov eax, dword ptr [edx + 0x64]
// 00643c01  ffe0                 jmp eax

struct CXTPCommandBar;

struct CXTPCommandBarVtbl
{
    char pad[0x64];
    void* (__stdcall* fn64)();
};

struct CXTPCommandBar
{
    CXTPCommandBarVtbl* vtbl;
};

extern "C" CXTPCommandBar* __cdecl sub_00643980();

void* __cdecl sub_00643bf0()
{
    CXTPCommandBar* p = sub_00643980();
    if (p == 0)
        return 0;
    CXTPCommandBarVtbl* v = p->vtbl;
    return ((void* (__stdcall*)())v->fn64)();
}
