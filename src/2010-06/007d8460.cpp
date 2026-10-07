// roc 2010-06 007d8460  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d8460
//
// 007d8460  8b8114010000         mov eax, dword ptr [ecx + 0x114]
// 007d8466  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007d8460 {
    char pad0[276];
    int m_x;
    int f();
};
int S_func_007d8460::f()
{
    return m_x;
}
