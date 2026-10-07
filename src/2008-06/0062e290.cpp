// roc 2008-06 0062e290  unit: RBX::VDecal::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e290
//
// 0062e290  c6814801000000       mov byte ptr [ecx + 0x148], 0
// 0062e297  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0062e290 {
    char pad0[328];
    char m_x;
    void f();
};
void S_func_0062e290::f()
{
    m_x = (char)0;
}
