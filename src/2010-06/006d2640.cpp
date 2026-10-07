// roc 2010-06 006d2640  unit: RBX::VSelectionBox::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2640
//
// 006d2640  8a8198030000         mov al, byte ptr [ecx + 0x398]
// 006d2646  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d2640 {
    char pad0[920];
    char m_x;
    char f();
};
char S_func_006d2640::f()
{
    return m_x;
}
