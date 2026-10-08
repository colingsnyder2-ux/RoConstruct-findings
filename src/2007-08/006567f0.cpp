// roc 2007-08 006567f0  unit: CXTPReportRow_Batch  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006567f0
//
// 006567f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 006567f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006567f0 {
    char pad0[88];
    int m_x;
    int f();
};
int S_func_006567f0::f()
{
    return m_x;
}
