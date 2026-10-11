// from server: 100% by colin
// roc 2007-08 006772e0  unit: CXTPCustomizeCommandsPage  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006772e0
//
// 006772e0  83815c010000ff       add dword ptr [ecx + 0x15c], -1
// 006772e7  7517                 jne 0x677300
// 006772e9  f681e400000002       test byte ptr [ecx + 0xe4], 2
// 006772f0  740e                 je 0x677300
// 006772f2  8b01                 mov eax, dword ptr [ecx]
// 006772f4  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 006772fa  6a01                 push 1
// 006772fc  6a00                 push 0
// 006772fe  ffd2                 call edx
// 00677300  c3                   ret 

struct CXTPCustomizeCommandsPage
{
    void m();
};

void CXTPCustomizeCommandsPage::m()
{
    if (--*(int*)((char*)this + 0x15c) == 0)
    {
        if (*(unsigned char*)((char*)this + 0xe4) & 2)
        {
            (*(void (__thiscall**)(void*, int, int))(*(int*)this + 0x19c))(this, 0, 1);
        }
    }
}
