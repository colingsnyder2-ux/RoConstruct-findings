// roc 2009-06 007f5d30  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5d30
//
// 007f5d30  8b442404             mov eax, dword ptr [esp + 4]
// 007f5d34  8b11                 mov edx, dword ptr [ecx]
// 007f5d36  898104010000         mov dword ptr [ecx + 0x104], eax
// 007f5d3c  8b4270               mov eax, dword ptr [edx + 0x70]
// 007f5d3f  ffd0                 call eax
// 007f5d41  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX000011@@QAEXH@Z)

namespace ns_ROCX000011 {
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
