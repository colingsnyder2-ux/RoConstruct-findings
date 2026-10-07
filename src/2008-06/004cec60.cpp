// roc 2008-06 004cec60  unit: RBX::Network::PhysicsSender  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cec60
//
// 004cec60  8a81d4030000         mov al, byte ptr [ecx + 0x3d4]
// 004cec66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cec60 {
    char pad0[980];
    char m_x;
    char f();
};
char S_func_004cec60::f()
{
    return m_x;
}
