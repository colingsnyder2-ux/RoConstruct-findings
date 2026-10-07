// roc 2010-06 006c8b20  unit: RBX::Handles  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c8b20
//
// 006c8b20  8a81b0000000         mov al, byte ptr [ecx + 0xb0]
// 006c8b26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c8b20 {
    char pad0[176];
    char m_x;
    char f();
};
char S_func_006c8b20::f()
{
    return m_x;
}
