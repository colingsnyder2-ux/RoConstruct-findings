// roc 2011-06 0068f7f0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068f7f0
//
// 0068f7f0  8a81e8010000         mov al, byte ptr [ecx + 0x1e8]
// 0068f7f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068f7f0 {
    char pad0[488];
    char m_x;
    char f();
};
char S_func_0068f7f0::f()
{
    return m_x;
}
