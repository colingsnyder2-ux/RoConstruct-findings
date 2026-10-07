// roc 2008-06 004cec50  unit: RBX::Network::PhysicsSender  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cec50
//
// 004cec50  8a81d5030000         mov al, byte ptr [ecx + 0x3d5]
// 004cec56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cec50 {
    char pad0[981];
    char m_x;
    char f();
};
char S_func_004cec50::f()
{
    return m_x;
}
