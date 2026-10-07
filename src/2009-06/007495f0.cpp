// roc 2009-06 007495f0  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007495f0
//
// 007495f0  8b8114010000         mov eax, dword ptr [ecx + 0x114]
// 007495f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007495f0 {
    char pad0[276];
    int m_x;
    int f();
};
int S_func_007495f0::f()
{
    return m_x;
}
