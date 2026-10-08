// from server: 67% by colin
// roc 2007-08 006d8f00  unit: CXTPDockingPaneLayout  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d8f00
//
// 006d8f00  8b442404             mov eax, dword ptr [esp + 4]
// 006d8f04  83782400             cmp dword ptr [eax + 0x24], 0
// 006d8f08  7409                 je 0x6d8f13
// 006d8f0a  89442404             mov dword ptr [esp + 4], eax
// 006d8f0e  e9adf9ffff           jmp 0x6d88c0
// 006d8f13  50                   push eax
// 006d8f14  e8d7fcffff           call 0x6d8bf0
// 006d8f19  b801000000           mov eax, 1
// 006d8f1e  c20400               ret 4

struct CXTPDockingPaneLayout
{
    char pad[0x24];
    int field_0x24;
};

extern int __fastcall sub_006d88c0(CXTPDockingPaneLayout* p);
extern void __cdecl sub_006d8bf0(CXTPDockingPaneLayout* p);

int __stdcall sub_006d8f00(CXTPDockingPaneLayout* p)
{
    if (p->field_0x24 != 0)
    {
        return sub_006d88c0(p);
    }
    sub_006d8bf0(p);
    return 1;
}
