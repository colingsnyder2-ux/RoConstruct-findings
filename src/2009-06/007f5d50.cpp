// roc 2009-06 007f5d50  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5d50
//
// 007f5d50  8b442404             mov eax, dword ptr [esp + 4]
// 007f5d54  8b11                 mov edx, dword ptr [ecx]
// 007f5d56  898108010000         mov dword ptr [ecx + 0x108], eax
// 007f5d5c  8b4270               mov eax, dword ptr [edx + 0x70]
// 007f5d5f  ffd0                 call eax
// 007f5d61  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX000012@@QAEXH@Z)

namespace ns_ROCX000012 {
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
