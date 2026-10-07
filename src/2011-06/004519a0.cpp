// roc 2011-06 004519a0  unit: RBX::VGuiMain::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004519a0
//
// 004519a0  8a4175               mov al, byte ptr [ecx + 0x75]
// 004519a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004519a0 {
    char pad0[117];
    char m_x;
    char f();
};
char S_func_004519a0::f()
{
    return m_x;
}
