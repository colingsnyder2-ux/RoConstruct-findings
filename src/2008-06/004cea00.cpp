// roc 2008-06 004cea00  unit: RBX::Network::PhysicsSender  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cea00
//
// 004cea00  8b81d8030000         mov eax, dword ptr [ecx + 0x3d8]
// 004cea06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cea00 {
    char pad0[984];
    int m_x;
    int f();
};
int S_func_004cea00::f()
{
    return m_x;
}
