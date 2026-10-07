// roc 2009-06 0062ad40  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062ad40
//
// 0062ad40  dd8180020000         fld qword ptr [ecx + 0x280]
// 0062ad46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0062ad40 {
    char pad[640];
    double m_x;
    double f();
};
double S_func_0062ad40::f()
{
    return m_x;
}
