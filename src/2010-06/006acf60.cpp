// roc 2010-06 006acf60  unit: RBX::BaseThreadPool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006acf60
//
// 006acf60  dd8198000000         fld qword ptr [ecx + 0x98]
// 006acf66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006acf60 {
    char pad[152];
    double m_x;
    double f();
};
double S_func_006acf60::f()
{
    return m_x;
}
