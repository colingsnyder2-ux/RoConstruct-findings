// from server: 100% by colin
// roc 2007-08 0070d1e0  unit: CXTColorWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d1e0
//
// 0070d1e0  56                   push esi
// 0070d1e1  8bf1                 mov esi, ecx
// 0070d1e3  e8a8f6ffff           call 0x70c890
// 0070d1e8  c7065cdd7d00         mov dword ptr [esi], 0x7ddd5c
// 0070d1ee  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 0070d1f8  8bc6                 mov eax, esi
// 0070d1fa  5e                   pop esi
// 0070d1fb  c3                   ret 

struct CXTColorWnd {
    char pad[0x88];
    int field_88;
    CXTColorWnd* construct();
};

extern void __fastcall base_ctor_70c890(CXTColorWnd*);

CXTColorWnd* CXTColorWnd::construct()
{
    base_ctor_70c890(this);
    *(int*)this = 0x7ddd5c;
    field_88 = 0;
    return this;
}
