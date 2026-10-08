// roc 2007-08 0065e5b0  unit: CXTPReportControl  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e5b0
//
// 0065e5b0  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 0065e5b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065e5b0 {
    char pad0[92];
    int m_x;
    int f();
};
int S_func_0065e5b0::f()
{
    return m_x;
}
