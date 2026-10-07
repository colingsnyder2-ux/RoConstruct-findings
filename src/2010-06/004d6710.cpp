// roc 2010-06 004d6710  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d6710
//
// 004d6710  dd8108010000         fld qword ptr [ecx + 0x108]
// 004d6716  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d6710 {
    char pad[264];
    double m_x;
    double f();
};
double S_func_004d6710::f()
{
    return m_x;
}
