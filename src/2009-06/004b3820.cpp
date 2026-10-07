// roc 2009-06 004b3820  unit: G3D::GWindow  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3820
//
// 004b3820  8a8198000000         mov al, byte ptr [ecx + 0x98]
// 004b3826  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b3820 {
    char pad0[152];
    char m_x;
    char f();
};
char S_func_004b3820::f()
{
    return m_x;
}
