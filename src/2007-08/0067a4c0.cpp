// from server: 100% by colin
// roc 2007-08 0067a4c0  unit: CXTPControls  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a4c0
//
// 0067a4c0  56                   push esi
// 0067a4c1  33c0                 xor eax, eax
// 0067a4c3  8bf1                 mov esi, ecx
// 0067a4c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067a4c9  8981f4000000         mov dword ptr [ecx + 0xf4], eax
// 0067a4cf  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 0067a4d5  8b01                 mov eax, dword ptr [ecx]
// 0067a4d7  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 0067a4dd  ffd2                 call edx
// 0067a4df  8b06                 mov eax, dword ptr [esi]
// 0067a4e1  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0067a4e4  8bce                 mov ecx, esi
// 0067a4e6  ffd2                 call edx
// 0067a4e8  5e                   pop esi
// 0067a4e9  c20400               ret 4

struct CXTPControls
{
    char m_pad[0xf4];
    int m_nFieldF4;
    char m_pad2[0x4];
    int m_nFieldFC;
    void SetValue(int);
};

void CXTPControls::SetValue(int nValue)
{
    CXTPControls *pThis = this;
    CXTPControls *pArg = (CXTPControls *)nValue;
    pArg->m_nFieldF4 = 0;
    pArg->m_nFieldFC = 0;
    (*(void (__thiscall **)(CXTPControls *))(*(int *)pArg + 0x124))(pArg);
    (*(void (__thiscall **)(CXTPControls *))(*(int *)pThis + 0x6c))(pThis);
}
