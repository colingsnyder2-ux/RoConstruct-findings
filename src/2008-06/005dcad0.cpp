// roc 2008-06 005dcad0  unit: RBX::VHumanoid::?$SignalDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dcad0
//
// 005dcad0  8d8140010000         lea eax, [ecx + 0x140]
// 005dcad6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005dcad0 {
    char pad0[320];
    int m_x;
    int* f();
};
int* S_func_005dcad0::f()
{
    return &m_x;
}
