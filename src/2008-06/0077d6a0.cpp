// roc 2008-06 0077d6a0  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d6a0
//
// 0077d6a0  8b442404             mov eax, dword ptr [esp + 4]
// 0077d6a4  8b11                 mov edx, dword ptr [ecx]
// 0077d6a6  898108010000         mov dword ptr [ecx + 0x108], eax
// 0077d6ac  8b4270               mov eax, dword ptr [edx + 0x70]
// 0077d6af  ffd0                 call eax
// 0077d6b1  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX000035@@QAEXH@Z)

namespace ns_ROCX000035 {
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
