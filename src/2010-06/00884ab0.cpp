// roc 2010-06 00884ab0  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884ab0
//
// 00884ab0  8b442404             mov eax, dword ptr [esp + 4]
// 00884ab4  8b11                 mov edx, dword ptr [ecx]
// 00884ab6  898104010000         mov dword ptr [ecx + 0x104], eax
// 00884abc  8b4270               mov eax, dword ptr [edx + 0x70]
// 00884abf  ffd0                 call eax
// 00884ac1  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX00001b@@QAEXH@Z)

namespace ns_ROCX00001b {
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
