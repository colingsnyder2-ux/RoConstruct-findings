// roc 2010-06 006921f0  unit: RBX::Mechanism  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006921f0
//
// 006921f0  8d81a4000000         lea eax, [ecx + 0xa4]
// 006921f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006921f0 {
    char pad0[164];
    int m_x;
    int* f();
};
int* S_func_006921f0::f()
{
    return &m_x;
}
