// from server: 100% by tester
// roc 2008-06 0077d6a0  unit: CXTPTabPaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d6a0
//
// 0077d6a0  8b442404             mov eax, dword ptr [esp + 4]
// 0077d6a4  8b11                 mov edx, dword ptr [ecx]
// 0077d6a6  898108010000         mov dword ptr [ecx + 0x108], eax
// 0077d6ac  8b4270               mov eax, dword ptr [edx + 0x70]
// 0077d6af  ffd0                 call eax
// 0077d6b1  c20400               ret 4

namespace ns_ROCX000012 {
struct CXTPTabPaintManager
{
    int m_nValue;
    char m_pad[260];
    int m_nField104;
    void SetValue(int);
};

void CXTPTabPaintManager::SetValue(int nValue)
{
    m_nField104 = nValue;
    (*(void (__thiscall **)(CXTPTabPaintManager *))(*(int *)this + 0x70))(this);
}
}