// roc 2010-06 006de4d0  unit: RBX::VFrame::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006de4d0
//
// 006de4d0  d98198010000         fld dword ptr [ecx + 0x198]
// 006de4d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006de4d0 {
    char pad[408];
    float m_x;
    float f();
};
float S_func_006de4d0::f()
{
    return m_x;
}
