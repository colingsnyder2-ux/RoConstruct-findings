// roc 2010-06 0066c280  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c280
//
// 0066c280  8a81e3010000         mov al, byte ptr [ecx + 0x1e3]
// 0066c286  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c280 {
    char pad0[483];
    char m_x;
    char f();
};
char S_func_0066c280::f()
{
    return m_x;
}
