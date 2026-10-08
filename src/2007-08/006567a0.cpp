// roc 2007-08 006567a0  unit: CXTPReportRow_Batch  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006567a0
//
// 006567a0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006567a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006567a0 {
    char pad0[32];
    int m_x;
    int f();
};
int S_func_006567a0::f()
{
    return m_x;
}
