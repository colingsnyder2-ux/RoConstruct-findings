// roc 2011-06 00451990  unit: RBX::VGuiMain::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451990
//
// 00451990  8a4174               mov al, byte ptr [ecx + 0x74]
// 00451993  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451990 {
    char pad0[116];
    char m_x;
    char f();
};
char S_func_00451990::f()
{
    return m_x;
}
