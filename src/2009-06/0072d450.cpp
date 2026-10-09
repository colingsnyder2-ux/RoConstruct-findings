// roc 2009-06 0072d450  unit: CXTPCommandBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d450
//
// 0072d450  56                   push esi
// 0072d451  8bf1                 mov esi, ecx
// 0072d453  8b8664010000         mov eax, dword ptr [esi + 0x164]
// 0072d459  85c0                 test eax, eax
// 0072d45b  7538                 jne 0x72d495
// 0072d45d  e82effffff           call 0x72d390
// 0072d462  85c0                 test eax, eax
// 0072d464  7408                 je 0x72d46e
// 0072d466  8bc8                 mov ecx, eax
// 0072d468  5e                   pop esi
// 0072d469  e992c5ffff           jmp 0x729a00
// 0072d46e  8bce                 mov ecx, esi
// 0072d470  e8ebfeffff           call 0x72d360
// 0072d475  8b8064010000         mov eax, dword ptr [eax + 0x164]
// 0072d47b  85c0                 test eax, eax
// 0072d47d  7516                 jne 0x72d495
// 0072d47f  39054419a500         cmp dword ptr [0xa51944], eax
// 0072d485  7509                 jne 0x72d490
// 0072d487  50                   push eax
// 0072d488  e83363ffff           call 0x7237c0
// 0072d48d  83c404               add esp, 4
// 0072d490  a14419a500           mov eax, dword ptr [0xa51944]
// 0072d495  5e                   pop esi
// 0072d496  c3                   ret 
// copied from an identical function in another client (function ?getSomething@CXTPCommandBar@ns_ROCX000003@@QAEHXZ)

namespace ns_ROCX000003 {
struct CXTPCommandBar {
    int field_0x164;
    int getSomething();
    CXTPCommandBar* getParent();
};

extern int g_008c86d8;
extern int __cdecl sub_0063dcb0(int);
extern int __fastcall sub_00643980();
extern CXTPCommandBar* __fastcall sub_00643950(CXTPCommandBar*);
extern int __fastcall sub_006321d0(CXTPCommandBar*);

int CXTPCommandBar::getSomething()
{
    int result = *(int*)((char*)this + 0x164);
    if (result != 0)
        return result;

    int v = sub_00643980();
    if (v != 0)
        return sub_006321d0((CXTPCommandBar*)v);

    CXTPCommandBar* p = sub_00643950(this);
    result = *(int*)((char*)p + 0x164);
    if (result != 0)
        return result;

    if (g_008c86d8 == 0)
    {
        sub_0063dcb0(0);
    }
    return g_008c86d8;
}
}
