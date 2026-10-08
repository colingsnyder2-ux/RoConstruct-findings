// from server: 100% by colin
// roc 2007-08 006fd400  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd400
//
// 006fd400  8b442404             mov eax, dword ptr [esp + 4]
// 006fd404  85c0                 test eax, eax
// 006fd406  7e02                 jle 0x6fd40a
// 006fd408  33c0                 xor eax, eax
// 006fd40a  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 006fd40d  740a                 je 0x6fd419
// 006fd40f  894114               mov dword ptr [ecx + 0x14], eax
// 006fd412  8b01                 mov eax, dword ptr [ecx]
// 006fd414  8b5008               mov edx, dword ptr [eax + 8]
// 006fd417  ffd2                 call edx
// 006fd419  c20400               ret 4

struct CAutoHidePanelTabManager {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int m_pad0;
    int m_pad1;
    int m_pad2;
    int m_pad3;
    int m_value;
    void SetTab(int n);
};

void CAutoHidePanelTabManager::SetTab(int n)
{
    if (n > 0)
        n = 0;
    if (n != m_value)
    {
        m_value = n;
        v2();
    }
}
