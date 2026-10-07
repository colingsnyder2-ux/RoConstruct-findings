// roc 2010-06 0051d310  unit: RakPeer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051d310
//
// 0051d310  c6815802000000       mov byte ptr [ecx + 0x258], 0
// 0051d317  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0051d310 {
    char pad0[600];
    char m_x;
    void f();
};
void S_func_0051d310::f()
{
    m_x = (char)0;
}
