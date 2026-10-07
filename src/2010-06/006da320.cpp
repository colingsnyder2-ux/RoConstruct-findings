// roc 2010-06 006da320  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da320
//
// 006da320  d98160030000         fld dword ptr [ecx + 0x360]
// 006da326  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006da320 {
    char pad[864];
    float m_x;
    float f();
};
float S_func_006da320::f()
{
    return m_x;
}
