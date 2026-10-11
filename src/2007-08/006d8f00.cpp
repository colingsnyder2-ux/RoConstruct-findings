// from server: 100% by colin
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

struct CXTPDockingPaneLayout {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
};

extern "C" int __stdcall sub_6d8bf0(CXTPDockingPaneLayout* p);
extern "C" int __stdcall sub_6d88c0(CXTPDockingPaneLayout* p);

int __stdcall sub_6d8f00(CXTPDockingPaneLayout* p)
{
    if (p->field24 != 0)
    {
        return sub_6d88c0(p);
    }
    sub_6d8bf0(p);
    return 1;
}
