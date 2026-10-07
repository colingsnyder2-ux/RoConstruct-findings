// roc 2008-06 00489960  unit: G3D::GWindow  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489960
//
// 00489960  8a817c010000         mov al, byte ptr [ecx + 0x17c]
// 00489966  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00489960 {
    char pad0[380];
    char m_x;
    char f();
};
char S_func_00489960::f()
{
    return m_x;
}
