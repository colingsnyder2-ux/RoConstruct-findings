// roc 2010-06 006da330  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da330
//
// 006da330  d98164030000         fld dword ptr [ecx + 0x364]
// 006da336  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006da330 {
    char pad[868];
    float m_x;
    float f();
};
float S_func_006da330::f()
{
    return m_x;
}
