// roc 2011-06 007293e0  unit: RBX::VHandles::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007293e0
//
// 007293e0  c681c800000001       mov byte ptr [ecx + 0xc8], 1
// 007293e7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007293e0 {
    char pad0[200];
    char m_x;
    void f();
};
void S_func_007293e0::f()
{
    m_x = (char)1;
}
