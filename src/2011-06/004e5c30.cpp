// roc 2011-06 004e5c30  unit: RBX::VHint::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e5c30
//
// 004e5c30  8d81a4000000         lea eax, [ecx + 0xa4]
// 004e5c36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e5c30 {
    char pad0[164];
    int m_x;
    int* f();
};
int* S_func_004e5c30::f()
{
    return &m_x;
}
