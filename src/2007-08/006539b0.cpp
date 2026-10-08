// from server: 77% by colin
// roc 2007-08 006539b0  unit: CInstanceRecord::CNameItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006539b0
//
// 006539b0  83794800             cmp dword ptr [ecx + 0x48], 0
// 006539b4  740d                 je 0x6539c3
// 006539b6  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 006539b9  8b01                 mov eax, dword ptr [ecx]
// 006539bb  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 006539c1  ffe0                 jmp eax
// 006539c3  c20400               ret 4

struct CInstanceRecord_CNameItem {
    char pad0[0x48];
    void* m_ptr;
    bool f(int);
};

bool CInstanceRecord_CNameItem::f(int)
{
    if (m_ptr != 0) {
        void** vtbl = *(void***)m_ptr;
        bool (__thiscall *fn)(void*, int) = (bool (__thiscall *)(void*, int))vtbl[0x2c];
        return fn(m_ptr, 0);
    }
    return false;
}
