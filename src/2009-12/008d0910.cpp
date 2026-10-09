// roc 2009-12 008d0910  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0910
//
// 008d0910  8b442404             mov eax, dword ptr [esp + 4]
// 008d0914  8b11                 mov edx, dword ptr [ecx]
// 008d0916  898108010000         mov dword ptr [ecx + 0x108], eax
// 008d091c  8b4270               mov eax, dword ptr [edx + 0x70]
// 008d091f  ffd0                 call eax
// 008d0921  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX00009d@@QAEXH@Z)

namespace ns_ROCX00009d {
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
