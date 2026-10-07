// roc 2009-06 0045ddc0  unit: CRobloxWnd::RenderStatsItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045ddc0
//
// 0045ddc0  dd81e0000000         fld qword ptr [ecx + 0xe0]
// 0045ddc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045ddc0 {
    char pad[224];
    double m_x;
    double f();
};
double S_func_0045ddc0::f()
{
    return m_x;
}
