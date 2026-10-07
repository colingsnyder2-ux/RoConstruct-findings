// roc 2009-06 0079c3b0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c3b0
//
// 0079c3b0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0079c3b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0079c3b0 {
    char pad0[36];
    int m_x;
    int f();
};
int S_func_0079c3b0::f()
{
    return m_x;
}
