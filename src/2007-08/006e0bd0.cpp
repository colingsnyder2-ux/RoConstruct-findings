// from server: 79% by colin
// roc 2007-08 006e0bd0  unit: CXTPDockingPaneTabbedContainer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0bd0
//
// 006e0bd0  8b442404             mov eax, dword ptr [esp + 4]
// 006e0bd4  8b5014               mov edx, dword ptr [eax + 0x14]
// 006e0bd7  895114               mov dword ptr [ecx + 0x14], edx
// 006e0bda  c7814001000001000000 mov dword ptr [ecx + 0x140], 1
// 006e0be4  83781805             cmp dword ptr [eax + 0x18], 5
// 006e0be8  7516                 jne 0x6e0c00
// 006e0bea  8379cc00             cmp dword ptr [ecx - 0x34], 0
// 006e0bee  7410                 je 0x6e0c00
// 006e0bf0  c744240400000000     mov dword ptr [esp + 4], 0
// 006e0bf8  83c1ac               add ecx, -0x54
// 006e0bfb  e94af3f4ff           jmp 0x62ff4a
// 006e0c00  c20400               ret 4

struct CXTPDockingPaneTabbedContainer
{
    char pad_0000[0x14];
    int  m_field14;
    int  m_field18;
    char pad_001c[0x140 - 0x1c];
    int  m_field140;

    void Assign(CXTPDockingPaneTabbedContainer* other);
};

extern "C" void __stdcall sub_62ff4a(void* p);

void CXTPDockingPaneTabbedContainer::Assign(CXTPDockingPaneTabbedContainer* other)
{
    m_field14 = other->m_field14;
    m_field140 = 1;
    if (other->m_field18 == 5)
    {
        if (*(int*)((char*)this - 0x34) != 0)
        {
            sub_62ff4a((char*)this - 0x54);
        }
    }
}
