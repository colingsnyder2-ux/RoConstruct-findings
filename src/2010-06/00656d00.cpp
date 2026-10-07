// roc 2010-06 00656d00  unit: RBX::VFrame::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00656d00
//
// 00656d00  8a8100010000         mov al, byte ptr [ecx + 0x100]
// 00656d06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00656d00 {
    char pad0[256];
    char m_x;
    char f();
};
char S_func_00656d00::f()
{
    return m_x;
}
