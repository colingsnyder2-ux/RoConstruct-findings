// roc 2011-06 00451950  unit: RBX::MergeBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451950
//
// 00451950  8a4154               mov al, byte ptr [ecx + 0x54]
// 00451953  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451950 {
    char pad0[84];
    char m_x;
    char f();
};
char S_func_00451950::f()
{
    return m_x;
}
