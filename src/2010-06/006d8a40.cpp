// roc 2010-06 006d8a40  unit: RBX::SkateboardController  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d8a40
//
// 006d8a40  d981b0000000         fld dword ptr [ecx + 0xb0]
// 006d8a46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d8a40 {
    char pad[176];
    float m_x;
    float f();
};
float S_func_006d8a40::f()
{
    return m_x;
}
