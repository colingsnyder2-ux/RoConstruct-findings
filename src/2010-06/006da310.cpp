// roc 2010-06 006da310  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da310
//
// 006da310  d9815c030000         fld dword ptr [ecx + 0x35c]
// 006da316  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006da310 {
    char pad[860];
    float m_x;
    float f();
};
float S_func_006da310::f()
{
    return m_x;
}
