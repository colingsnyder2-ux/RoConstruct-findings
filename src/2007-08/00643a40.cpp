// from server: 100% by colin
// roc 2007-08 00643a40  unit: CXTPCommandBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643a40
//
// 00643a40  56                   push esi
// 00643a41  8bf1                 mov esi, ecx
// 00643a43  8b8664010000         mov eax, dword ptr [esi + 0x164]
// 00643a49  85c0                 test eax, eax
// 00643a4b  7538                 jne 0x643a85
// 00643a4d  e82effffff           call 0x643980
// 00643a52  85c0                 test eax, eax
// 00643a54  7408                 je 0x643a5e
// 00643a56  8bc8                 mov ecx, eax
// 00643a58  5e                   pop esi
// 00643a59  e972e7feff           jmp 0x6321d0
// 00643a5e  8bce                 mov ecx, esi
// 00643a60  e8ebfeffff           call 0x643950
// 00643a65  8b8064010000         mov eax, dword ptr [eax + 0x164]
// 00643a6b  85c0                 test eax, eax
// 00643a6d  7516                 jne 0x643a85
// 00643a6f  3905d8868c00         cmp dword ptr [0x8c86d8], eax
// 00643a75  7509                 jne 0x643a80
// 00643a77  50                   push eax
// 00643a78  e833a2ffff           call 0x63dcb0
// 00643a7d  83c404               add esp, 4
// 00643a80  a1d8868c00           mov eax, dword ptr [0x8c86d8]
// 00643a85  5e                   pop esi
// 00643a86  c3                   ret 

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
