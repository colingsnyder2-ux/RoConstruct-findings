// roc 2011-06 00451980  unit: RBX::VGuiMain::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451980
//
// 00451980  8a4173               mov al, byte ptr [ecx + 0x73]
// 00451983  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451980 {
    char pad0[115];
    char m_x;
    char f();
};
char S_func_00451980::f()
{
    return m_x;
}
