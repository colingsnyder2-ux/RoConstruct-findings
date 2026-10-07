// roc 2009-06 0062ad30  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062ad30
//
// 0062ad30  dd8178020000         fld qword ptr [ecx + 0x278]
// 0062ad36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0062ad30 {
    char pad[632];
    double m_x;
    double f();
};
double S_func_0062ad30::f()
{
    return m_x;
}
