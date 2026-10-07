// roc 2009-06 0050ed20  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050ed20
//
// 0050ed20  8a8158020000         mov al, byte ptr [ecx + 0x258]
// 0050ed26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0050ed20 {
    char pad0[600];
    char m_x;
    char f();
};
char S_func_0050ed20::f()
{
    return m_x;
}
