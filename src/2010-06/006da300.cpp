// roc 2010-06 006da300  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da300
//
// 006da300  8a8168030000         mov al, byte ptr [ecx + 0x368]
// 006da306  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006da300 {
    char pad0[872];
    char m_x;
    char f();
};
char S_func_006da300::f()
{
    return m_x;
}
