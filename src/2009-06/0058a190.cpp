// roc 2009-06 0058a190  unit: seg_00580000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a190
//
// 0058a190  dd4118               fld qword ptr [ecx + 0x18]
// 0058a193  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058a190 {
    char pad[24];
    double m_x;
    double f();
};
double S_func_0058a190::f()
{
    return m_x;
}
