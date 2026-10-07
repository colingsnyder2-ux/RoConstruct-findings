// roc 2011-06 0068f800  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068f800
//
// 0068f800  8a8158010000         mov al, byte ptr [ecx + 0x158]
// 0068f806  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068f800 {
    char pad0[344];
    char m_x;
    char f();
};
char S_func_0068f800::f()
{
    return m_x;
}
