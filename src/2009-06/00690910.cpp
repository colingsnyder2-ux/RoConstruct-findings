// roc 2009-06 00690910  unit: RBX::VBlockMesh::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00690910
//
// 00690910  c6815c01000000       mov byte ptr [ecx + 0x15c], 0
// 00690917  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00690910 {
    char pad0[348];
    char m_x;
    void f();
};
void S_func_00690910::f()
{
    m_x = (char)0;
}
