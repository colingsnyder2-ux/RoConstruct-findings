// from server: 75% by colin
// roc 2007-08 006e1650  unit: CXTPDockingPaneTabbedContainer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e1650
//
// 006e1650  56                   push esi
// 006e1651  8bf1                 mov esi, ecx
// 006e1653  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 006e165a  7420                 je 0x6e167c
// 006e165c  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 006e1666  ff1544ec7700         call dword ptr [0x77ec44]
// 006e166c  50                   push eax
// 006e166d  e84eebf4ff           call 0x6301c0
// 006e1672  3bc6                 cmp eax, esi
// 006e1674  7506                 jne 0x6e167c
// 006e1676  ff153cec7700         call dword ptr [0x77ec3c]
// 006e167c  8bce                 mov ecx, esi
// 006e167e  e8bbebf4ff           call 0x63023e
// 006e1683  5e                   pop esi
// 006e1684  c20c00               ret 0xc

extern "C" void* __stdcall GetCapture();
extern "C" int __stdcall ReleaseCapture();

struct CXTPDockingPaneTabbedContainer
{
    char pad[0x1a4];
    void* field_1a4;
    void func_006e1650(int, int, int);
};

void CXTPDockingPaneTabbedContainer::func_006e1650(int, int, int)
{
    if (field_1a4 != 0)
    {
        field_1a4 = 0;
        void* cap = GetCapture();
        if (cap == this)
        {
            ReleaseCapture();
        }
    }
    // call 0x63023e with ecx = this
    ((void (__thiscall*)(CXTPDockingPaneTabbedContainer*))0x63023e)(this);
}
