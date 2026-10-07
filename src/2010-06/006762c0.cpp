// roc 2010-06 006762c0  unit: RBX::Assembly  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006762c0
//
// 006762c0  c6416c01             mov byte ptr [ecx + 0x6c], 1
// 006762c4  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006762c0 {
    char pad0[108];
    char m_x;
    void f();
};
void S_func_006762c0::f()
{
    m_x = (char)1;
}
