// roc 2007-03 006725b0  unit: seg_00670000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006725b0
//
// 006725b0  56                   push esi
// 006725b1  33c0                 xor eax, eax
// 006725b3  8bf1                 mov esi, ecx
// 006725b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006725b9  8981f4000000         mov dword ptr [ecx + 0xf4], eax
// 006725bf  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 006725c5  8b01                 mov eax, dword ptr [ecx]
// 006725c7  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 006725cd  ffd2                 call edx
// 006725cf  8b06                 mov eax, dword ptr [esi]
// 006725d1  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006725d4  8bce                 mov ecx, esi
// 006725d6  ffd2                 call edx
// 006725d8  5e                   pop esi
// 006725d9  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPControls@ns_ROCX00001e@@QAEXH@Z)

namespace ns_ROCX00001e {
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
}
