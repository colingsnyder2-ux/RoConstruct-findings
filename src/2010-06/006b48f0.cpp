// roc 2010-06 006b48f0  unit: RBX::VBlockMesh::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b48f0
//
// 006b48f0  c6816401000000       mov byte ptr [ecx + 0x164], 0
// 006b48f7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b48f0 {
    char pad0[356];
    char m_x;
    void f();
};
void S_func_006b48f0::f()
{
    m_x = (char)0;
}
