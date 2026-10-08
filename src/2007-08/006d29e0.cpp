// roc 2007-08 006d29e0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d29e0
//
// 006d29e0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 006d29e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d29e0 {
    char pad0[36];
    int m_x;
    int f();
};
int S_func_006d29e0::f()
{
    return m_x;
}
