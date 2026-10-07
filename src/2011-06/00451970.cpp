// roc 2011-06 00451970  unit: RBX::VGuiMain::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451970
//
// 00451970  8a4155               mov al, byte ptr [ecx + 0x55]
// 00451973  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451970 {
    char pad0[85];
    char m_x;
    char f();
};
char S_func_00451970::f()
{
    return m_x;
}
