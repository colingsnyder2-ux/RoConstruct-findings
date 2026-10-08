// from server: 100% by colin
// roc 2007-08 006e23e0  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e23e0
//
// 006e23e0  56                   push esi
// 006e23e1  8bf1                 mov esi, ecx
// 006e23e3  e878feffff           call 0x6e2260
// 006e23e8  85c0                 test eax, eax
// 006e23ea  7502                 jne 0x6e23ee
// 006e23ec  5e                   pop esi
// 006e23ed  c3                   ret 
// 006e23ee  8b86c0010000         mov eax, dword ptr [esi + 0x1c0]
// 006e23f4  5e                   pop esi
// 006e23f5  c3                   ret 

struct CXTPDockingPaneTabbedContainer {
    char pad[0x1c0];
    int field_0x1c0;
    int getSomething();
    int func_006e23e0();
};

int CXTPDockingPaneTabbedContainer::func_006e23e0()
{
    if (getSomething() == 0)
        return 0;
    return field_0x1c0;
}
