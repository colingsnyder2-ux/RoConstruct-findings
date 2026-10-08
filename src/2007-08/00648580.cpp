// from server: 100% by colin
// roc 2007-08 00648580  unit: CXTPCommandBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648580
//
// 00648580  8bc1                 mov eax, ecx
// 00648582  33c9                 xor ecx, ecx
// 00648584  8908                 mov dword ptr [eax], ecx
// 00648586  894808               mov dword ptr [eax + 8], ecx
// 00648589  894804               mov dword ptr [eax + 4], ecx
// 0064858c  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00648593  c3                   ret 

struct CXTPCommandBar {
    int m_n0;
    int m_n4;
    int m_n8;
    int m_nC;
    CXTPCommandBar* Init();
};

CXTPCommandBar* CXTPCommandBar::Init()
{
    m_n0 = 0;
    m_n8 = 0;
    m_n4 = 0;
    m_nC = 1;
    return this;
}
