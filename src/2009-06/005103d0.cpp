// roc 2009-06 005103d0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005103d0
//
// 005103d0  8d4160               lea eax, [ecx + 0x60]
// 005103d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005103d0 {
    char pad0[96];
    int m_x;
    int* f();
};
int* S_func_005103d0::f()
{
    return &m_x;
}
