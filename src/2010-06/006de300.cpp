// roc 2010-06 006de300  unit: RBX::VFrame::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006de300
//
// 006de300  8a8194010000         mov al, byte ptr [ecx + 0x194]
// 006de306  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006de300 {
    char pad0[404];
    char m_x;
    char f();
};
char S_func_006de300::f()
{
    return m_x;
}
