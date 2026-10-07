// roc 2009-06 0050ed80  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050ed80
//
// 0050ed80  c6815802000000       mov byte ptr [ecx + 0x258], 0
// 0050ed87  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0050ed80 {
    char pad0[600];
    char m_x;
    void f();
};
void S_func_0050ed80::f()
{
    m_x = (char)0;
}
