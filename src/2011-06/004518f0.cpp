// roc 2011-06 004518f0  unit: RBX::MergeBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004518f0
//
// 004518f0  8a4170               mov al, byte ptr [ecx + 0x70]
// 004518f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004518f0 {
    char pad0[112];
    char m_x;
    char f();
};
char S_func_004518f0::f()
{
    return m_x;
}
