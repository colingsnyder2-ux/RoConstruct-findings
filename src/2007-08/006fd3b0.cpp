// from server: 100% by colin
// roc 2007-08 006fd3b0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd3b0
//
// 006fd3b0  8b442404             mov eax, dword ptr [esp + 4]
// 006fd3b4  39411c               cmp dword ptr [ecx + 0x1c], eax
// 006fd3b7  740a                 je 0x6fd3c3
// 006fd3b9  89411c               mov dword ptr [ecx + 0x1c], eax
// 006fd3bc  8b01                 mov eax, dword ptr [ecx]
// 006fd3be  8b5008               mov edx, dword ptr [eax + 8]
// 006fd3c1  ffd2                 call edx
// 006fd3c3  c20400               ret 4

struct CXTPTabManager_CNavigateButtonArrowLeft
{
    char m_pad[0x1c];
    int m_nValue;
    void SetValue(int nValue);
};

void CXTPTabManager_CNavigateButtonArrowLeft::SetValue(int nValue)
{
    if (m_nValue != nValue)
    {
        m_nValue = nValue;
        (*(void (__thiscall **)(void *))(*(int *)this + 8))(this);
    }
}
