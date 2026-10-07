// roc 2009-06 0074cd50  unit: CXTPReportControl  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cd50
//
// 0074cd50  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0074cd53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0074cd50 {
    char pad0[96];
    int m_x;
    int f();
};
int S_func_0074cd50::f()
{
    return m_x;
}
