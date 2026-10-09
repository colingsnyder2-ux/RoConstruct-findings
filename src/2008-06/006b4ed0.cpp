// roc 2008-06 006b4ed0  unit: CXTPCommandBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4ed0
//
// 006b4ed0  56                   push esi
// 006b4ed1  8bf1                 mov esi, ecx
// 006b4ed3  8b8664010000         mov eax, dword ptr [esi + 0x164]
// 006b4ed9  85c0                 test eax, eax
// 006b4edb  7538                 jne 0x6b4f15
// 006b4edd  e82effffff           call 0x6b4e10
// 006b4ee2  85c0                 test eax, eax
// 006b4ee4  7408                 je 0x6b4eee
// 006b4ee6  8bc8                 mov ecx, eax
// 006b4ee8  5e                   pop esi
// 006b4ee9  e972e0feff           jmp 0x6a2f60
// 006b4eee  8bce                 mov ecx, esi
// 006b4ef0  e8ebfeffff           call 0x6b4de0
// 006b4ef5  8b8064010000         mov eax, dword ptr [eax + 0x164]
// 006b4efb  85c0                 test eax, eax
// 006b4efd  7516                 jne 0x6b4f15
// 006b4eff  390560e09700         cmp dword ptr [0x97e060], eax
// 006b4f05  7509                 jne 0x6b4f10
// 006b4f07  50                   push eax
// 006b4f08  e893a1ffff           call 0x6af0a0
// 006b4f0d  83c404               add esp, 4
// 006b4f10  a160e09700           mov eax, dword ptr [0x97e060]
// 006b4f15  5e                   pop esi
// 006b4f16  c3                   ret 
// copied from an identical function in another client (function ?getSomething@CXTPCommandBar@ns_ROCX000000@@QAEHXZ)

namespace ns_ROCX000000 {
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
