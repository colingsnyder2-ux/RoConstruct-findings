// roc 2010-06 0066c270  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c270
//
// 0066c270  8a81e0010000         mov al, byte ptr [ecx + 0x1e0]
// 0066c276  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c270 {
    char pad0[480];
    char m_x;
    char f();
};
char S_func_0066c270::f()
{
    return m_x;
}
