// roc 2007-08 006d42f0  unit: CXTPReportRow_Batch  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d42f0
//
// 006d42f0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 006d42f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d42f0 {
    char pad0[100];
    int m_x;
    int f();
};
int S_func_006d42f0::f()
{
    return m_x;
}
