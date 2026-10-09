// roc 2008-06 0077d680  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d680
//
// 0077d680  8b442404             mov eax, dword ptr [esp + 4]
// 0077d684  8b11                 mov edx, dword ptr [ecx]
// 0077d686  898104010000         mov dword ptr [ecx + 0x104], eax
// 0077d68c  8b4270               mov eax, dword ptr [edx + 0x70]
// 0077d68f  ffd0                 call eax
// 0077d691  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX000034@@QAEXH@Z)

namespace ns_ROCX000034 {
struct CXTPTabPaintManager
{
    int m_nValue;
    char m_pad[0x100];
    int m_nField104;
    void SetValue(int);
};

void CXTPTabPaintManager::SetValue(int nValue)
{
    m_nField104 = nValue;
    (*(void (__thiscall **)(CXTPTabPaintManager *))(*(int *)this + 0x70))(this);
}
}
