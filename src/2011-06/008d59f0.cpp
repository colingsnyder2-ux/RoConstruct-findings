// roc 2011-06 008d59f0  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d59f0
//
// 008d59f0  8b442404             mov eax, dword ptr [esp + 4]
// 008d59f4  8b11                 mov edx, dword ptr [ecx]
// 008d59f6  898108010000         mov dword ptr [ecx + 0x108], eax
// 008d59fc  8b4270               mov eax, dword ptr [edx + 0x70]
// 008d59ff  ffd0                 call eax
// 008d5a01  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX0000e3@@QAEXH@Z)

namespace ns_ROCX0000e3 {
struct CXTPTabPaintManager
{
    int m_pad[0x42];
    int m_nValue;

    void SetValue(int value);
};

void CXTPTabPaintManager::SetValue(int value)
{
    m_nValue = value;
    ((void (__thiscall *)(CXTPTabPaintManager *))((*(void ***)this)[0x1C]))(this);
}
}
