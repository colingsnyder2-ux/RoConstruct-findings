// roc 2009-06 0074cd00  unit: CXTPReportControl  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cd00
//
// 0074cd00  8b4140               mov eax, dword ptr [ecx + 0x40]
// 0074cd03  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0074cd00 {
    char pad0[64];
    int m_x;
    int f();
};
int S_func_0074cd00::f()
{
    return m_x;
}
