// roc 2010-06 00884ad0  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884ad0
//
// 00884ad0  8b442404             mov eax, dword ptr [esp + 4]
// 00884ad4  8b11                 mov edx, dword ptr [ecx]
// 00884ad6  898108010000         mov dword ptr [ecx + 0x108], eax
// 00884adc  8b4270               mov eax, dword ptr [edx + 0x70]
// 00884adf  ffd0                 call eax
// 00884ae1  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX00001c@@QAEXH@Z)

namespace ns_ROCX00001c {
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
