// roc 2011-06 00451940  unit: RBX::MergeBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451940
//
// 00451940  8a4171               mov al, byte ptr [ecx + 0x71]
// 00451943  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451940 {
    char pad0[113];
    char m_x;
    char f();
};
char S_func_00451940::f()
{
    return m_x;
}
