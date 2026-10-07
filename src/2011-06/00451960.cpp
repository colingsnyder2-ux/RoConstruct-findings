// roc 2011-06 00451960  unit: RBX::MergeBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00451960
//
// 00451960  8a4158               mov al, byte ptr [ecx + 0x58]
// 00451963  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00451960 {
    char pad0[88];
    char m_x;
    char f();
};
char S_func_00451960::f()
{
    return m_x;
}
