// from server: 100% by colin
// roc 2007-08 006485a0  unit: CXTPCommandBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006485a0
//
// 006485a0  8bc1                 mov eax, ecx
// 006485a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006485a6  8908                 mov dword ptr [eax], ecx
// 006485a8  33c9                 xor ecx, ecx
// 006485aa  894808               mov dword ptr [eax + 8], ecx
// 006485ad  894804               mov dword ptr [eax + 4], ecx
// 006485b0  89480c               mov dword ptr [eax + 0xc], ecx
// 006485b3  c20400               ret 4

struct CXTPCommandBar
{
    int m_field0;
    int m_field4;
    int m_field8;
    int m_fieldC;
    CXTPCommandBar* construct(int value);
};

CXTPCommandBar* CXTPCommandBar::construct(int value)
{
    m_field0 = value;
    m_field8 = 0;
    m_field4 = 0;
    m_fieldC = 0;
    return this;
}
