// from server: 83% by colin
// roc 2007-08 006e0c90  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0c90
//
// 006e0c90  83796800             cmp dword ptr [ecx + 0x68], 0
// 006e0c94  7422                 je 0x6e0cb8
// 006e0c96  83796400             cmp dword ptr [ecx + 0x64], 0
// 006e0c9a  741c                 je 0x6e0cb8
// 006e0c9c  c781c001000000000000 mov dword ptr [ecx + 0x1c0], 0
// 006e0ca6  83c154               add ecx, 0x54
// 006e0ca9  6a00                 push 0
// 006e0cab  51                   push ecx
// 006e0cac  e88ff8ffff           call 0x6e0540
// 006e0cb1  8bc8                 mov ecx, eax
// 006e0cb3  e868e0f8ff           call 0x66ed20
// 006e0cb8  c3                   ret 

struct CXTPDockingPaneTabbedContainer
{
    char pad[0x54];
    int field_54;
    char pad2[0x0c];
    int field_64;
    int field_68;
    char pad3[0x154];
    int field_1c0;
    void method();
};

extern "C" void* __stdcall sub_006e0540(void*, int);
extern "C" void __stdcall sub_0066ed20(void*);

void CXTPDockingPaneTabbedContainer::method()
{
    if (field_68 != 0 && field_64 != 0)
    {
        field_1c0 = 0;
        void* p = sub_006e0540(&field_54, 0);
        sub_0066ed20(p);
    }
}
