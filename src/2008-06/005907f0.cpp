// roc 2008-06 005907f0  unit: RBX::RootInstance  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005907f0
//
// 005907f0  c681b002000001       mov byte ptr [ecx + 0x2b0], 1
// 005907f7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005907f0 {
    char pad0[688];
    char m_x;
    void f();
};
void S_func_005907f0::f()
{
    m_x = (char)1;
}
