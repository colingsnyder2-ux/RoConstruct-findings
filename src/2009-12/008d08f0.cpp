// roc 2009-12 008d08f0  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d08f0
//
// 008d08f0  8b442404             mov eax, dword ptr [esp + 4]
// 008d08f4  8b11                 mov edx, dword ptr [ecx]
// 008d08f6  898104010000         mov dword ptr [ecx + 0x104], eax
// 008d08fc  8b4270               mov eax, dword ptr [edx + 0x70]
// 008d08ff  ffd0                 call eax
// 008d0901  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPTabPaintManager@ns_ROCX00009c@@QAEXH@Z)

namespace ns_ROCX00009c {
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
