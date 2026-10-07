// roc 2009-06 00666580  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666580
//
// 00666580  8a81e6010000         mov al, byte ptr [ecx + 0x1e6]
// 00666586  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666580 {
    char pad0[486];
    char m_x;
    char f();
};
char S_func_00666580::f()
{
    return m_x;
}
