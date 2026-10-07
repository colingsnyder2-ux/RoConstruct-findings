// roc 2010-06 00656d10  unit: RBX::VFrame::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00656d10
//
// 00656d10  c6819400000000       mov byte ptr [ecx + 0x94], 0
// 00656d17  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00656d10 {
    char pad0[148];
    char m_x;
    void f();
};
void S_func_00656d10::f()
{
    m_x = (char)0;
}
