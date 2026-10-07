// roc 2009-06 0062ad70  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062ad70
//
// 0062ad70  dd8168020000         fld qword ptr [ecx + 0x268]
// 0062ad76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0062ad70 {
    char pad[616];
    double m_x;
    double f();
};
double S_func_0062ad70::f()
{
    return m_x;
}
