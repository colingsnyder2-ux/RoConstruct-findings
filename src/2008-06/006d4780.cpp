// roc 2008-06 006d4780  unit: CXTPReportColumn  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4780
//
// 006d4780  8b81ac000000         mov eax, dword ptr [ecx + 0xac]
// 006d4786  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d4780 {
    char pad0[172];
    int m_x;
    int f();
};
int S_func_006d4780::f()
{
    return m_x;
}
