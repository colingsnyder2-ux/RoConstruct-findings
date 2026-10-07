// roc 2009-06 00666570  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666570
//
// 00666570  8a81e4010000         mov al, byte ptr [ecx + 0x1e4]
// 00666576  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666570 {
    char pad0[484];
    char m_x;
    char f();
};
char S_func_00666570::f()
{
    return m_x;
}
