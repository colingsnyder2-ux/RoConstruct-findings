// roc 2011-06 004519b0  unit: RBX::VGuiMain::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004519b0
//
// 004519b0  8a4176               mov al, byte ptr [ecx + 0x76]
// 004519b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004519b0 {
    char pad0[118];
    char m_x;
    char f();
};
char S_func_004519b0::f()
{
    return m_x;
}
