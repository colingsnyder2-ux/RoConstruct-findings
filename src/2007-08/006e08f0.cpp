// from server: 100% by colin
// roc 2007-08 006e08f0  unit: CXTPDockingPaneTabbedContainer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e08f0
//
// 006e08f0  83b9f000000000       cmp dword ptr [ecx + 0xf0], 0
// 006e08f7  750f                 jne 0x6e0908
// 006e08f9  83c1ac               add ecx, -0x54
// 006e08fc  e83ffcffff           call 0x6e0540
// 006e0901  8bc8                 mov ecx, eax
// 006e0903  e9b8edf8ff           jmp 0x66f6c0
// 006e0908  c3                   ret 

struct CXTPDockingPaneTabbedContainer {
    char pad[0xf0];
    int field_f0;
    int GetSomething();
};

int __fastcall sub_6E0540(CXTPDockingPaneTabbedContainer* p);
int __fastcall sub_66F6C0(int v);

int CXTPDockingPaneTabbedContainer::GetSomething()
{
    if (field_f0 == 0)
    {
        CXTPDockingPaneTabbedContainer* p = (CXTPDockingPaneTabbedContainer*)((char*)this - 0x54);
        return sub_66F6C0(sub_6E0540(p));
    }
}
