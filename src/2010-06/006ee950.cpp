// roc 2010-06 006ee950  unit: RBX::VHandles::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ee950
//
// 006ee950  c681c800000001       mov byte ptr [ecx + 0xc8], 1
// 006ee957  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ee950 {
    char pad0[200];
    char m_x;
    void f();
};
void S_func_006ee950::f()
{
    m_x = (char)1;
}
